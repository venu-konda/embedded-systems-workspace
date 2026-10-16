#include<stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
int decimal(char *,int);
int power (int, int);
void convert(char *);
int isBinary (char *);
int main ()
{
	char s[33];
INPUT:
	printf ("enter the binary data:");
	__fpurge(stdin);
	gets(s);
//	scanf("[^\n]%s",s);
	if (!(isBinary (s)))
	{
		printf ("error\n");
		goto INPUT;
	}
	int l1, i, sum = 0,num,rem;
	l1 = strlen(s);
	printf("\n len:%d\n",l1);
	convert(s);
	sum=decimal(s,l1);
	/*
	num=atoi(s);
	for (i = 0; i <=l1;num/=10, i++)
	{
		rem=num%10;
		sum += ( rem* power(2, i));
	}*/
	printf("decimal=%d\noctal=%o\nhexa=%x",sum,sum,sum);


}

int isBinary (char *p)
{
	for (p;*p;p++)
	{
		if (!((*p == '1') || (*p == '0')))
			return 0;
	}
	return 1;
}

int power (int a, int i)
{
	int max = 1;
	for (i; i; i--)
		max *= a;
	return max;
}
void convert(char *p)
{
	for(p;*p;p++)
		*p-=48;
}

int decimal(char *p,int l)
{
	char *q;
	q=p;
	int i,sum=0;
	  for(i=0,q+=l-1;q>=p;q--,i++)
        {
                sum+=(*q)*(power(2,i));
        }
	  return sum;
}
