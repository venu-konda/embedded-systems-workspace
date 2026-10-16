#include<stdio.h>
int main()
{
	int data,i,prev=9,max,min,j;
	scanf("%d  %d",&min,max);
	for(data=min;data<=max;data++)
	{
		for(i=data,i,i/=10)
		{
			rem=i%10;
			if(rem<=prev)
			{
				rem=prev;
		printf("%d",rem);
			}
		}

	}
}


                                                                           
