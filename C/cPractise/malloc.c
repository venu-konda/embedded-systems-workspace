#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p=NULL;
	int *q;
	p=malloc(1);
	q=malloc(20);
	printf("%lu %lu\n",p,q);
//	long long int x=123456789123456789;
//	*p=x;
	for(int i=0;i<10000;i++)
		p[i]=10;
	for(int i=0;i<10000;i++)
	printf("%d\n",p[i]);
}
