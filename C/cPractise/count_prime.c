#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int prime(int a);
int main()
{
	int count=0,i;
	int arr[10];
	for(i=0;i<10;i++)
	{
		//arr[i]=rand()%20+1;
		//printf("%d ",arr[i]);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
	{
		if(prime(arr[i]))
			count++;
	}
	printf("\ncount=%d",count);

}
int prime(int a)
{
	if(a==0||a==1)
		return 0;
	else if(a==2)
		return 1;
	int i;
	for(i=2;i<=a/2;i++)
	{
		if(a%i==0)
			return 0;	
	}
	return 1;
}
