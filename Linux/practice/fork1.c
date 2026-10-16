#include<stdio.h>
#include<unistd.h>
int main()
{
	int ret=fork();
	if(ret<0)
		printf("error\n");
	else if(ret>0)
		printf("main p=%d run=%d child=%d\n",getppid(),getpid(),ret);
	else
	{
		printf("chil1 p=%d child=%d\n",getppid(),getpid());

		int ret1=fork();
	if(ret1==0)	
			printf("child 2 p=%d child=%d\n",getppid(),getpid());
sleep(2);

	}
}
