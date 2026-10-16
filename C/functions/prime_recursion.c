#include<stdio.h>
//#include<math.h>
int i=1,count=0;
int checkPrime(int);

int main()
{
	int max,min,data;
	scanf("%d",&min);
	scanf("%d",&max);
	for(data=min;data<=max;data++,i=1,count=0)
	{
	if(checkPrime(data))
		printf("%d,",data);
	}
}

int checkPrime(int var)
{
	i++;
//	int s=sqrt(var);
	if((var%i==0)&&(i<var))
	{
		count++;
	}
	if((var%i)&&(i<var))
	checkPrime(var);
	if(count==0)
	return 1;
	
	else
	return 0;
}
