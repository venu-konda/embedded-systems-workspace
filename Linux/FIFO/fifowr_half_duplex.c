/*Implement simplex communication P1--->FIFO--->P2*/
//Add the snippets in required places
#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<string.h>
#include<stdlib.h>
#include<fcntl.h>
#include<signal.h>
//#include <usr/include/asm-generic/errno-base.h>
#include <errno.h>
int main()
{
	int fd,n;
	int b[2];
	char a[10];
	char str[100];
	n=mkfifo("fifo2",0666);
	if(pipe(b)<0)
	{
		perror("pipe");
		exit(0);
	}
	if(n>=0)
	{

		fd=open("fifo2",O_RDWR);
		if(fd==-1)
		{
			perror("open");
			exit(0);
		}
		printf("FIFO opened for writing\n");
		do{
			scanf("%s",a);
			write(fd,a,strlen(a)+1);
			//	strcat(a,'\0');

		}while(strcmp(a,"quit"));
		close(fd);
	}
	else 
	{
		perror("mkfifo");
		close(b[1]);
		dup2(b[0],0);
		int i=0;
		sleep(1);
		while(read(b[0],&str[i++],1));
		str[i]=0;
		printf("s=%s\n",str);
		//signal(17,SIG_IGN);
		exit(0);
	}

}
