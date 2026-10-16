#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<errno.h>
int main(int argc,char *argv[])
{
	int fd1,fd2,ret,ret1;
	char ch;
	ret1=mkfifo("fifo",0666);
	if(ret1<0)
	{
		perror("mkfifo");
		if(errno!=EEXIST)
			exit(0);
	}
	ret=fork();
	if(ret)
	{
		fd1=open(argv[1],O_RDONLY);
		while(read(fd1,&ch,1))
		{
			printf("%c",ch);
				write(ret1,&ch,1);
		}
				close(fd1);
		
	}
	else
	{
		fd2=open(argv[2],O_CREAT|O_WRONLY,0660);
		while(read(ret1,&ch,1))
		{
			printf("%c",ch);
			write(fd2,&ch,1);
		}
			close(fd2);
	}
	printf("sucessfull\n");
	//close(ret1);
}
