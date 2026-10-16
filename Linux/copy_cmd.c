#include<stdio.h>
#include<stdlib.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
int main(int argc,char *argv[])
{
	int ret,src,dest;
	char ch;
	if(argc!=3)
	{
		printf("Incorrect Inputs\n");
		exit(0);
	}
	src=open(argv[1],O_CREAT|O_RDONLY);
	dest=open(argv[2],O_CREAT|O_WRONLY,0777);
/*	if(src<0)
	{
		perror("open");
		exit(0);
	}
	if(dest<0)
	{
		perror("open");
		exit(0);
	}*/
	while(1)
	{
		ret=read(src,&ch,1);
		write(dest,&ch,1);
		if(ret<=0)
			break;
	}
//	printf("hello");
	close(src);
	close(dest);

	

}
