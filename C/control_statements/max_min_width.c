#include<stdio.h>
int main()
{
	int a=0,b=0,min,max,width;
	printf("enter the minimum value=");
	scanf("%d",&min);
	printf("enter the maximum value=");
	scanf("%d",&max);
	printf("enter the width=");
	scanf("%d",&width);
	for(a=min;a<=max;a++)
	{
		for(b=1;b<=10;b++)
		{
			printf("%dx%d=%*d\n",a,b,width,a*b);
		}
		printf("\n");
	}


}
