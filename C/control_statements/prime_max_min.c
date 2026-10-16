#include<stdio.h>
int main()
{
	int data,max,min,count,i;
	scanf("%d",&min);
	scanf("%d",&max);
	for(data=min;data<=max;data++)
	{
		count=0;
		for(i=1;i<=data;i++)
		{
			if(data%i==0)
			{
				count++;
			}
		}
		if(count==2)
		{
			printf("%d,",data);
		
		}}
	
}

