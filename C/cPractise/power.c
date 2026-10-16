#include<stdio.h>
int power(int data,int pow)
{
	int sum=1;
	while(pow--)
	{
		sum*=data;
	}
	return sum;
}
int main()
{
	int data,pow;
	scanf("%d %d",&data,&pow);
	int data1=power(data,pow);
	printf("%d",data1);

}
