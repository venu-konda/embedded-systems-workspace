#include<stdio.h>
int main()
{
	int status,pid;
	int ret=fork();
	if(ret<0)
		printf("error\n");
	else if(ret>0)

	{
		printf("parent\n");
		pid=wait(&status);
		printf("main p=%d run=%d child=%d\n",getppid(),getpid(),ret);
		printf("main=sttus=%d",status>>8);
	}
	else 
	{
		printf("child\n");
		sleep(10);
		printf("chil1 p=%d child=%d\n",getppid(),getpid());
		exit(10);
	}
}
