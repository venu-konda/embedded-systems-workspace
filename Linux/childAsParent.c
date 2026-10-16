#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int ret1,ret2;
	ret1=fork();
	if(ret1==-1)
	{
		perror("fork");
		exit(0);
	}
	if(ret1)
	{
sleep(5);
		printf("parent1 PID =%d  PPID=%d\n",getpid(),getppid());

	}
	else
	{
		printf("child1 PID =%d  PPID=%d\n",getpid(),getppid());
		ret2=fork();
		if(ret2)
		{
sleep(2);			
printf("parent2  PID =%d  PPID=%d\n",getpid(),getppid());
		}
		else if(ret2==0)
		{
			printf("child2 PID =%d  PPID=%d\n",getpid(),getppid());
		}	
	}
}
