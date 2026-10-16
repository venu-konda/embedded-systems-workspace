/************ UDP SERVER CODE *******************/

#include <stdio.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <stdlib.h>
#include<arpa/inet.h>
#include<unistd.h>
int palindrome(char *p)
{
	int i=0,j;
	j=strlen(p)-1;
	for(i=0;i<j;i++,j--)
	{
		if(p[i]!=p[j])
			return 0;
	}
	return 1;
}



int main(int argc,char **argv)
{
	int udpSocket, nBytes;
	char buffer[100];
	int x;
	struct sockaddr_in serverAddr, clientAddr;
	socklen_t addr_size;

	if(argc<2)
	{
		puts("input:./udpSer(exe) server_port");
		return 0;
	}

	/*Create UDP socket*/
	udpSocket = socket(PF_INET, SOCK_STREAM, 0);
	int rbuff=0,sbuff=0;
	/*Configure settings in address struct*/
	serverAddr.sin_family = AF_INET;
	serverAddr.sin_port = htons(atoi(argv[1]));
	serverAddr.sin_addr.s_addr = inet_addr("0.0.0.0");

	memset(serverAddr.sin_zero, '\0', sizeof serverAddr.sin_zero);  

	/*Bind socket with address struct*/
	bind(udpSocket, (struct sockaddr *) &serverAddr, sizeof(serverAddr));

	/*Initialize size variable to be used later on*/
	addr_size = sizeof(clientAddr);
	socklen_t optlen1=sizeof(sbuff);
	socklen_t optlen2=sizeof(rbuff);
	int s=getsockopt(udpSocket,SOL_SOCKET,SO_SNDBUF,&sbuff,&optlen1);
	printf("send socket buff size=%d\n",sbuff);
	s=getsockopt(udpSocket,SOL_SOCKET,SO_SNDBUF,&rbuff,&optlen2);
	printf("send socket buff size=%d\n",rbuff);
	

	while(1)
	{
		printf("udp server waiting on port no: %s\n",argv[1]);
		nBytes = recvfrom(udpSocket,buffer,100,0,(struct sockaddr *)&clientAddr, &addr_size);

		unsigned short portNo=(unsigned short)ntohs(clientAddr.sin_port);
		char *ip=inet_ntoa(clientAddr.sin_addr);
		printf("got message from client:\n");
		printf("Using port: %d\n",portNo);
		printf("With ip: %s\n",ip);


		printf("server recvd: %s\n",buffer); 



		printf("testing palindrome or not , wait a movement please...\n");

		/* ***************** make a call to test palindrome , and collect return  value into " X " ****************/
		x=palindrome(buffer);
		sleep(1);
		puts("And server echoing...\n");
		
		if(x==1)
		{
			sendto(udpSocket,"palindrome",100,0,(struct sockaddr *)&clientAddr,addr_size);
			// If it palindrome 
			/*Send uppercase message back to client, using serverStorage as the address*/

		}
		else
		{
			sendto(udpSocket,"not palindrome",100,0,(struct sockaddr *)&clientAddr,addr_size);
			// If it is not palindrome 
			/*Send uppercase message back to client, using serverStorage as the address*/

		}


		puts("And server echoed.\n");


	}

	return 0;
}
