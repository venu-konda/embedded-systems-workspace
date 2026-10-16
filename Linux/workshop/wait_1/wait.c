#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("incorrect input\n");
		exit(0);
	}
	int n=atoi(argv[1]);
	int i,ret[n],status,pid;
	srand(getpid());
	for(i=0;i<n;i++)
	{
		ret[i]=fork();
		if(ret[i]==0)
		{
			sleep(rand()%3+1);
			printf("the child %d pid=%d  ppid=%d\n",i,getpid(),getppid());
			exit(i+1);
		}
	}
	for(i=0;i<n;i++)
	{
		if(ret[i])
		{
			pid=wait(&status);
			printf("the child process %d with exit status %d pid=%d ppid=%d\n",pid,status>>8,getpid(),getppid()); 	
		}
	}


}
