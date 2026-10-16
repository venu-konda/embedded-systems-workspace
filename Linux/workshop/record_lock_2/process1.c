#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include<unistd.h> 
int main(int argc,char *argv[])
{
	int fd1,fd2,ret;
	char ch;

	fd1=open(argv[1],O_CREAT|O_WRONLY,0660);
	if(fd1<0)
	{
		perror("open");
		exit(0);
	}
	struct flock v;
	v.l_type=F_WRLCK;
	v.l_whence=0;
	v.l_start=0;
	v.l_len=0;
	//	v.l_pid=0;
	int f=fcntl(fd1,F_SETLK,&v);
	if(f<0)
	{
		perror("fcntl");
		exit(0);
	}
	//	printf("%d\n",ret);
	//	if(ret==-1)
	{
		//		perror("fcntl");
		//		exit(0);
	}
	ch='A';
	while(1)
	{
		sleep(1);
		ret=write(fd1,&ch,1);
		printf("written ch=%c\n",ch);
		//	 if(ret=='Z')
		if(ch=='Z')
			break;
		ch++;
	}
	printf("process completed\n");
	close(fd1);

}
