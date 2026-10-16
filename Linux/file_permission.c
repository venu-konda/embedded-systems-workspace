#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
int main(int argc,char *argv[])
{
	int fd1,fd2,ret;
	char ch;
	char s[100]="asdfsdffsdkdfshkldfsklhhajsasfajklsfadjklfds";
	fd1=open(argv[1],O_CREAT|O_RDONLY,0777);
	if(fd1<0)
	{
	perror("open");
	exit(0);
	}
	fd2=open(argv[2],O_CREAT|O_WRONLY,0777);
	if(fd2<0)
	{
	perror("open");
	printf("fil12\n");
	exit(0);
	}
	
	while(ret=read(fd1,&ch,1))
	write(fd2,&ch,1);
	close(fd1);
	close(fd2);
}
