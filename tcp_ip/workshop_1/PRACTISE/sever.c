#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
int main(int argc,char **argv)
{
	int sfd;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	if(sfd<0)
	{
		perror("socket");
		exit(0);
	}
	printf("socket created successfullu\n");
	struct sockaddr_in saddr;
	int slen=sizeof(saddr);
	saddr.sin_family=AF_INET;
	saddr.sin_port=htons(atoi(argv[1]));   /* port in network byte order */
	saddr.sin_addr.s_addr=inet_addr("0.0.0.0");
	if(bind(sfd,(const struct sockaddr *)&saddr,slen)<0)
	{
		perror("bind");
		return 0;
	}
	printf("bind sucessfully\n");
	if(listen(sfd,1)<0)
	{
		perror("listen");
		return 0;
	}
	struct sockaddr_in caddr;
	int clen=sizeof(caddr);
	int cfd=accept(sfd,(struct sockaddr *)&caddr,&clen);
	if(cfd<0)
	{
		perror("accept");
		close(sfd);
	}
	char buff[100];
	while(1)
	{
		recv(cfd,buff,100,0);
		printf("receved=%s\n",buff);
		send(cfd,"hello\n",7,0);
	}
	close(cfd);
	close(sfd);


}
