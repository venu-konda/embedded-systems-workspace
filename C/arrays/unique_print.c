#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int test_unique(int *,int);
int main()
{
	char arr[20];
	int n=20;
	srand(getpid());
	for(i=0;i<n;i++)
	{
		arr[i]=rand()%26+65;
		if(!test_unique(arr,i)
				i--;
	}
	for(i=0;i<n;i++)
	{
	printf("%d ",arr[i]);
	}
}

int test_unique(int *arr,int i)
{
	for(int j=0;j<i;j++)
	{
	if(arr[i]==arr[j])
	return 0;
	}
	return 1;
	}
