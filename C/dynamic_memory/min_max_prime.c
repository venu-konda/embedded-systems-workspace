#include<stdio.h>
#include<stdlib.h>
int prime(int );
int main()
{
	int i,data,min,max,*p,n,j;
	printf("enter min:");
	scanf("%d",&min);
	printf("enter min:");
	scanf("%d",&max);
	n=(min+max)/2;
	p=malloc(n*sizeof(int));
	for(data=min,i=0;data<=max;data++)
	{
		if(prime(data))
				{
					p[i]=data;
					i++;	
				}	
	}
	p=realloc(p,i*sizeof(int));
//	printf("\nsize of::%d\n",p[i+100]);
//	p[i+100]=10;

//	printf("\nsize of::%d\n",p[i+100]);
	for(j=0;j<i;j++)
		printf("%d,",p[j]);
}
int prime(int a)
{
	int i,count=0;
	for(i=2;i<a;i++)
	{
		if(a%i==0)
			count++;
	}
	if(count==0)
		return 1;
	else
		return 0;
}
