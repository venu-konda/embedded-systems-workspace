//program 3 concurrent server-using fork()
#include"headers.h"

int testprime(int n)
{
	if(n==0||n==1)
		return 0;
	if(n==2)
		return 1;
	int i=2;
	for(i;i<=n/2;i++)
		if(n%i==0)
			return 0;
	return 1;
}
int checkPali(int data)
{
	int rev=0,i;
	for(i=data;i;i/=10)
	{
		rev=rev*10+(i%10);
	}
	if(rev==data)
		return 1;
	return 0;
}
int * palindrome(int N,int S)
{
	int *p,i=0;
	p=calloc(N,sizeof(int));
	while(i<N)
	{
		if(checkPali(S)==1)
			p[i++]=S;
		S++;
	}
	return p;
}
int fact(int a)
{
	int s=1;
	while(a)
	{
		s=s*a;
		a--;
	}
	return s;
}
int *primeNumbers(int N , int S)
{
	int *p,i=0;
	p=calloc(N,sizeof(int));
	while(i<N)
	{
		if(testprime(S)==1)
			p[i++]=S;
		S++;
	}
	printf("p array:\n");
	for(i=0;i<N;i++)
	{
		printf("%d , ",p[i]);
	}
	return p;
}
void sig_chld(int signo)
{
	pid_t pid;
	int status;
	pid=wait(&status);
	printf("child %d terminated with status %d \n",pid,(status>>8));
}

void client_info(int cfd,struct sockaddr_in caddr)
{
	char *ip=(char *)inet_ntoa(caddr.sin_addr);
	unsigned short portNo=ntohs(caddr.sin_port);
	printf("Whose IP is %s\n",ip);
	printf("and port is %d\n",portNo);
	printf("using descriptor %d\n",cfd);
}

size_t mystrlen(char *p)
{
	size_t i=0;
	while(p[i++]);

	return i-1;
}


int main(int argc,char **argv)
{
	signal(SIGCHLD,sig_chld);

	if(argc<2)
	{ 
		puts("input : server_executable port_number\n");
		exit(0); 
	}

	puts("creating server socketn");
	int sfd;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket"); 
		exit(0); 
	}
	puts("server socket created succussfully");


	int val=1;
	if(setsockopt(sfd,SOL_SOCKET,SO_REUSEADDR,&val,4)<0)
	{
		perror("setsockopt");
		exit(0);
	}
	puts("setsockopt success");

	puts("binding...");
	struct sockaddr_in saddr;
	saddr.sin_family=AF_INET;
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	saddr.sin_port=htons(atoi(argv[1]));
	socklen_t slen=sizeof(saddr);
	if(bind(sfd,(const struct sockaddr *)&saddr,sizeof(saddr))<0)
	{
		perror("bind");
		exit(0); 
	}
	puts("bind success");

	puts("preparing connection queue");
	if(listen(sfd,1)<0)
	{ 
		perror("listen"); 
		exit(0);
	}
	puts("listen success\n");

	struct sockaddr_in caddr;
	int cfd,N,S,*primeData,*palindromeData;
	socklen_t clen=sizeof(caddr);
	char main[]="1.prime 2.plaindrome 3.factorial";
	while(1)
	{
		puts("server waiting for connection....\n");
		cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
		if(cfd<0)
		{
			perror("accept");
			exit(0); 
		}
		printf("serve... %d accepted connection from client with CFD: %d \n",getpid(),cfd);
		client_info(cfd,caddr);
		if(fork()==0)
		{
			char buff[100];
			int status;
			size_t len;
			while(1)
			{
				send(cfd,main,strlen(main)+1,0);
				//	printf("server ... %d waiting for message from client...\n",getpid());
				status=recv(cfd,buff,100,0);
				if(status<0)
				{ 
					perror("recv");
					break; 
				}
				else if(status==0)
				{
					puts("client exited abnormally\n"); 
					break;
				}
				printf("server recv: %s\n",buff);



				if(strcmp(buff,"quit")==0)
				{ 
					puts("client terminating formally\n");
					break; 
				}
				else if(strcmp(buff,"prime")==0)
				{ 
					send(cfd,"how many ?",100,0);
					recv(cfd,&N,4,0);
					printf("%d\n",N);
					send(cfd,"starting value ?",100,0);
					recv(cfd,&S,4,0);
					printf("%d\n",S);
					primeData=calloc(N,4);
					primeData=primeNumbers(N,S);
					send(cfd,primeData,N*sizeof(int),0);
					sleep(1);
					puts("sent result to client...\n");

				}
				else if(strcmp(buff,"palindrome")==0)
				{ 
					send(cfd,"how many ?",100,0);
					recv(cfd,&N,4,0);
					printf("%d\n",N);
					send(cfd,"starting value ?",100,0);
					recv(cfd,&S,4,0);
					printf("%d\n",S);
					palindromeData=calloc(N,4);
					palindromeData=palindrome(N,S);
					send(cfd,palindromeData,N*sizeof(int),0);
					sleep(1);
					puts("sent result to client...\n");

				}
				else if(strcmp(buff,"factorial")==0)
				{ 
					send(cfd,"number please ",100,0);
					recv(cfd,&N,4,0);
					printf("%d\n",N);
					S=fact(N);
					send(cfd,&S,sizeof(int),0);
					sleep(1);
					puts("sent result to client...\n");
				}


				/*		len=mystrlen(buff);
						send(cfd,&len,sizeof len,0);*/



			}
			close(cfd);
			exit(cfd);
		}
	}
	close(sfd);
}  


