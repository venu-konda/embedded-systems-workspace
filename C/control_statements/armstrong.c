#include<stdio.h>
int main()
{
	int max,min,sum=0,rem,data;
	scanf("%d",&min);
	scanf("%d",&max);

	for(data=min;data<=max;data++)

	{
	int temp=data;
		while(temp)
		{
		rem=temp%10;
		sum=sum+(rem*rem*rem);
		temp/=10;
		}
	
	
	if(sum==data)
	printf("%d ",data);
	}
}
