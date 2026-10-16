#include<stdio.h>
int main()
{
	int data,temp,bit,rev=0,r;
	scanf("%d",&data);
	for(temp=data,rev=0;temp;temp/=10)
	{
		rev=rev*10+temp%10;
	}
	if(rev==data)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}

