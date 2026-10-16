/* tcp_server.c */
#include "headers.h"
int testMSG(char *);
void collectNS(char * , int * , int *);
int *primeNumbers(int , int);
int count=0;
int main(int argc,char **argv)
{
	if(argc<2)
	{
		puts("cmdline input format: server.exe server_port");
		return 0;
	}

	puts("Creating Server Socket...");
	int sfd;
	char *q;
	int max=0,min=0,*primeData;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		return 0;     
	}
	puts("Server Socket Created Successfully");

	puts("Binding : Associating/Mapping IP Address+Serve_PortNo with Socket/Netowrk File Descriptor");
	struct sockaddr_in saddr;
	int slen=sizeof(saddr);

	saddr.sin_family=AF_INET;
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	saddr.sin_port=htons(atoi(argv[1]));
	if(bind(sfd,(const struct sockaddr *)&saddr,slen)<0)
	{
		perror("bind");
		close(sfd);
		return 0;     
	}
	puts("Bind Success");  

	puts("Creating Connection Queue of Size 1 ONLY...");
	if(listen(sfd,1)<0)
	{
		perror("listen");
		close(sfd);
		return 0;     
	}
	puts("Connection Queue Created");


	puts("waiting for 3-Way Handshake to initiated by any client...");
	struct sockaddr_in caddr;
	int clen=sizeof(caddr);
	int cfd;
	cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
	if(cfd<0)
	{
		perror("accept");
		close(sfd);
		return 0;     
	}
	puts("Connection with some client accepted");
	puts("Whose Client Information is :");
	unsigned short int clientPortNo=ntohs(caddr.sin_port);
	char *clientIP = inet_ntoa(caddr.sin_addr);
	printf("Client's Ephemeral Port is : %d\n",clientPortNo);
	printf("Client's IPv4 Address   is : %s\n",clientIP);

	char buff[100];
	int status;

	puts("Waiting for some message/request from connected client...");
	//status=read(cfd,buff,100);
	status=recv(cfd,buff,100,0);
	if(status<0)
	{
		perror("read");	   
	}
	else if(status==0)
	{
		puts("Connected Client abruptly/suddenly/without 3-Way Handshake for Connection Termination terminated");	   
	}
	else
	{
		if(testMSG(buff))
		{
			collectNS(buff,&min,&max);

			if((min<=0) || (max<=0)|| (min>max))
			{
				puts("sending ERROR MSG to client...\n");
				send(cfd,"result not found",17,0);
				sleep(1);
			}
			else
			{
				puts("sending result to client...\n");
				primeData=primeNumbers(min,max);
				send(cfd,&count,4,0);
				send(cfd,primeData,count*sizeof(int),0);
				sleep(1);
				puts("sent result to client...\n");

			}


		}
		else
		{
			puts("sending ERROR MSG to client...\n");
			send(cfd,"result not found",17,0);
			sleep(1);
		}



	}

	puts("Closing Connection With Connected Client");
	close(cfd);

	puts("Server going down");
	close(sfd);


}



int testMSG(char *msg)
{
	char str[100];
	char s[6][100];
	strcpy(str,msg);
	char *p=str;
	char *q;
	p=strtok(msg," ");
	int i=0;
	while(p)
	{
		q=p;
		strcpy(s[i++],p);
		p=strtok(NULL," ");
		*(q+strlen(q))=' ';
	}
	if(strcmp(s[0],"prime")==0)
	{
		if(strcmp(s[1],"numbers")==0)
		{
			if(strcmp(s[2],"between")==0)
			{
				if(strcmp(s[4],"to")==0)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

void collectNS(char *msg , int *min , int *max)
{
	char str[100];
        char s[6][100];
        strcpy(str,msg);
        char *p=str;
        char *q;
        p=strtok(msg," ");
        int i=0;
        while(p)
        {
                q=p;
                strcpy(s[i++],p);
                p=strtok(NULL," ");
                *(q+strlen(q))=' ';
        }
	*min=atoi(s[3]);
	*max=atoi(s[5]);

}


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
int *primeNumbers(int min , int max)
{
	int *p=NULL,i=0;
	for(i=min;i<=max;i++)
	{
		if(testprime(i)==1)
		{
			p=realloc(p,(count+1)*4);
			p[count++]=i;
		}
	}
	printf("p array:\n");
	for(i=0;i<count;i++)
	{
		printf("%d , ",p[i]);
	}
	return p;
}


