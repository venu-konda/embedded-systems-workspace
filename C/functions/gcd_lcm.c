#include<stdio.h>
int main()
{
	int r,n,d,num1,num2;
	scanf("%d",&num1);
	scanf("%d",&num2);
	n=(num1>num2)?num1:num2;
	d=(num1<num2)?num1:num2;
	r=n%d;
	while(r)
	{
		n=d;
		d=r;
		r=n%d;
	}
	int gcd=d;
	int lcm=(num1*num2)/gcd;
	printf("lcm=%d",lcm);
	printf("gcd=%d",gcd);
}

