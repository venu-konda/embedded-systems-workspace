#include<stdio.h>
int power(int data,int p)
{
	int sum=1;
	int i=0;
	while(i<p)
	{
		sum*=data;
		p--;
	}
	return sum;
}
int main()
{
	int data,pwr;
	scanf("%d %d",&data,&pwr);
	int data1=power(data,pwr);
	printf("%d\n",data1);
}
