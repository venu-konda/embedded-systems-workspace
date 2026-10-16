#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc,char *argv[])
{
	if(argc!=3)
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
			printf("the child %d pid=%d  ppid=%d\n",i,getpid(),getppid());
			sleep(rand()%n+1);
			exit(i);
		}
	}
	if(ret[atoi(argv[2])-1])
	{	
		pid=waitpid(ret[atoi(argv[2])-1],&status,0);
		printf("the child process %d with exit status %d pid=%d ppid=%d\n",pid,status>>8,getpid(),getppid()); 	
	}	

}
