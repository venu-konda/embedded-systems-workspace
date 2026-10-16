#include<stdio.h>
#include<signal.h>

void *f1()
{
//	printf("entered\n");
	raise(11);
}

int main()
{
	//ignal(2,SIG_DFL);
	signal(2,f1);
	while(1);
}
