#include<sys/types.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	int fd1,fd2;
	fd1=open(argv[1],O_RDWR);
	if(fd1<0)
	{
		perror("open");
		exit(0);
	}
	char ch;
	while(read(fd1,&ch,1))
	{
	lseek(fd1,-1,1);
	ch+=32;
		write(fd1,&ch,1);
	}
	close(fd1);
	close(fd2);
}
