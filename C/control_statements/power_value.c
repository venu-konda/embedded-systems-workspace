#include<stdio.h>
int main()
{
	int x,y,m=1,count=0;
	printf("enter any integer=");
	scanf("%d",&x);
	printf("enter any power value=");
	scanf("%d",&y);
	while(count<y)//y--
	{
		m=m*x;
		count++;
	}
	printf("the power of above=%d",m);
}

