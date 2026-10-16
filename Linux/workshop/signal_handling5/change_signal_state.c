#include<stdio.h>
#include<signal.h>
#include<unistd.h>
int i;
void *f1()
{
	printf("i=%d\n",i);
}

int main()
{
	sigset_t mask[64];
for( i=1;i<64;i++)
{
	signal(i,f1);
}
for( i=1;i<64;i++)
{
	sigemptyset(&mask[i]);
	sigaddset(&mask[i],i);
	sigprocmask(SIG_BLOCK,&mask,NULL);
	sleep(10);
	sigprocmask(SIG_UNBLOCK,&mask,NULL);
	puts("hii");
}
	while(1);
	
}
