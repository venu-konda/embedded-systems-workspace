#include<stdio.h>
#include<signal.h>
#include<unistd.h>

int fib(int data)
{
	if(data==1)
		return 0;
	else if(data==2)
		return 1;
	else
		return (fib(data-1)+fib(data-2));
}
int main()
{
	unsigned long long n;
	sigset_t mask;
	sigemptyset(&mask);
	sigaddset(&mask,3);
	sigprocmask(SIG_BLOCK,&mask,NULL);
	scanf("%llu",&n);
//aise(8);
	n=fib(n);
	printf("%llu\n",n);
	sigprocmask(SIG_UNBLOCK,&mask,NULL);
	printf("h\n");
}
