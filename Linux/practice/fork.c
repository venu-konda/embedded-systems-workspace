#include<stdio.h>
int main()
{
	int ret=fork();
	if(ret<0)
	printf("error\n");
	else if(ret>0)
		printf("p=%d run=%d child=%d\n",getppid(),getpid(),ret);
	else
		printf("p=%d child=%d\n",getppid(),getpid());
}
