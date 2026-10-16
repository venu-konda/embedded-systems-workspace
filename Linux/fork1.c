#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int ret=fork();
	if(ret==-1)
	{
		perror("fork");
		exit(0);
	}
	if(ret)
	{
		printf("parent   PID==%d        PPID=%d\n",getpid(),getppid());
	}
	else
	{
		printf("child   PID==%d        PPID=%d",getpid(),getppid());
	}
}
