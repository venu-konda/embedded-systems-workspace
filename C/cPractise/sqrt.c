#include<stdio.h>
void sqroot(int data,int sq)
{
	int sum,s,i;
	for(i=2;i<data/2;i++)
	{
		s=sq,sum=1;
		//if(i%2==0)
		{
			while(s--)
			{
				sum*=i;

			}	
			if(sum==data)
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	
	
}
int main()
{
	int data,sq;
	scanf("%d%d",&data,&sq);
	sqroot(data,sq);
}
