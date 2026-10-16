#include<stdio.h>
#include<unistd.h>
int main()
{
int a,b,n;
printf("enter n number of lines=:");
scanf("%d",&n);
for(a=1;a<=n;a++,printf("\n"))
{
	for(b=1;b<=10;b++)
	{
		printf(" %dx%d=%d ",a,b,a*b);
		//sleep(1);
		fflush(stdout);
		usleep(100000);
	}
}
}

