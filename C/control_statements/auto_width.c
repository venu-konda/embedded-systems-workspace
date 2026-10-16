#include<stdio.h>
int main()
{
	int a,b,max,min,width=0,temp=max*10;
	printf("enter the minimum value=");
	scanf("%d",&min);
	printf("enter the maximum value=");
	scanf("%d",&max);
	while(temp!=0)
	{
		width++;
		temp/=10;
	}
	width+=2;
	for(a=min;a<=max;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%*d",width,a*b);
		
		}
		printf("\n");

	}

	}
