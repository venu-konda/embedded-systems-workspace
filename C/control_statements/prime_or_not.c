#include<stdio.h>
int main()
{
	int data,count=0,i;
	printf("enter the data=");
	scanf("%d",&data);
	for(i=1;i<=data;i++)
	{
		if((data%i)==0)
		{
			count++;
		}
	}
	if(count==2)
	{
		printf("%d is a prime number",data);

	}
	else
	{
		printf("%d is not a prime number",data);
}
}

