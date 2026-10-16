#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include <sys/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netinet/ip.h>
#include<stdio_ext.h>
int main(int argc,char **argv)
{
	int fd;
	fd=socket(AF_INET,SOCK_STREAM,0);
	if(fd<0)
	{
		perror("socket");
		exit(0);
	}
	printf("socket created successfullu\n");
	struct sockaddr_in saddr;
	int slen=sizeof(saddr);
	saddr.sin_family=AF_INET;
	saddr.sin_port=htons(atoi(argv[1]));   /* port in network byte order */
	saddr.sin_addr.s_addr=inet_addr(argv[2]);
	if(connect(fd,(const struct sockaddr *)&saddr,slen)<0)
	{
		perror("connect");
		return 0;
	}
	printf("connected  sucessfully\n");
	char buff[100];
	while(1)
	{
		__fpurge(stdin);
		scanf("%s",buff);
		send(fd,buff,100,0);
		recv(fd,buff,100,0);
		printf("receved=%s\n",buff);
	}
	close(fd);


}
