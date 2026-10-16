#include<stdio.h>
int main()
{
	int data,temp,temp1,temp2,rem=0,high=0,second=0,low=9;
	scanf("%d",&data);
	temp=data;
	temp2=data;
	temp1=data;
	for(temp;temp;temp/=10)
	{
		rem=temp%10;
			if(rem>=high)
				high=rem;
	}
	for(temp2;temp2;temp2/=10)
	{
		rem=temp2%10;
		if((rem>second)&&(rem!=high))
			second=rem;
	}
	for(temp1;temp1;temp1/=10)
	{
		rem=temp1%10;
		if(rem<=low)
			low=rem;
	}
	printf("%d\n",high);
	printf("%d\n",low);
	printf("%d",second);
}

