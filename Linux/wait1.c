#include<stdio.h>
int main()
{
	int ret,status,pid;
	ret=fork();
	if(ret==-1)
	{
		perror("fork");
		exit(0);
	}
	if(ret)
	{
		pid=waitpid(ret,&status,0
	}
}
