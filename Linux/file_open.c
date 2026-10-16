#include<stdio.h>
#include<unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	int fd1,fd2;
	fd1=open(argv[1],O_RDONLY);
	if(fd1<0)
	{
		perror("open");
		exit(0);
	}
	fd2=open(argv[2],O_CREAT|O_WRONLY,0777);
	char ch;
	while(read(fd1,&ch,1))
	{
		write(fd2,&ch,1);
		printf("%c",ch);
	}
	close(fd1);
	close(fd2);
}
