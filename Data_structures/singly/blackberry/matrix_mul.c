#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
int main()
{
	int arr1[r][c];
	int arr2[r][c];
	int i,j,k;
	int arr[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr1[i][j]=rand()%3+1;
			arr2[i][j]=rand()%3+1;
		}
	}
	printf("array1\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
	}
	printf("array2\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr2[i][j]);
		}
		printf("\n");
	}

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr[i][j]=0;
			for(k=0;k<c;k++)
			{
				arr[i][j]+=arr1[i][k]*arr1[k][j];
			}
		}
	}
	printf("array mul\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}

