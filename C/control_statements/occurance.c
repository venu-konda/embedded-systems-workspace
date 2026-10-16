#include<stdio.h>
#include<math.h>
int checkPrime(int);
int checkDigit(int,int);
int main()
{
	int max,min,count,data,i,digit,s;
	scanf("%d",&min);
	scanf("%d",&max);
	scanf("%d",&digit);
	for(data=min;data<=max;data++)
	{
		if(checkDigit(data,digit))
				{
				if(checkPrime(data))
				{
						printf("%d,",data);
						}
				}
}
}
int checkPrime(int var)
{
	int s=sqrt(var);
	int i;
	for(i=2;i<=s;i++)
	{
		if((var%i)==0)
			return 0;
	}
	return 1;
}
int checkDigit(int var,int d)
{
//	int var,d;
	while(var)
	{
		if((var%10)==d)
			return 1;
		var/=10;
	}
	return 0;
}



