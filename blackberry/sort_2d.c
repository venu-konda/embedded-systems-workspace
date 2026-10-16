#include<stdio.h>
#include<stdlib.h>
#define r 3
#define c 3
int main()
{
	int arr[r][c];
	int i,j,k,temp;
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			arr[i][j]=rand()%10+1;
		}
	}
	printf("array1\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c-1;j++)
		{
			for(k=j+1;k<c;k++)
			{
				if(arr[i][j]>arr[i][k])
				{
					temp=arr[i][j];
					arr[i][j]=arr[i][k];
					arr[i][k]=temp;
				}
			}
		}
	}
	for(j=0;j<r;j++)
	{
		for(i=0;i<c-1;i++)
		{
			for(k=i+1;k<c;k++)
			{
				if(arr[i][j]>arr[k][j])
				{
					temp=arr[i][j];
					arr[i][j]=arr[k][j];
					arr[k][j]=temp;
				}
			}
		}
	}
	printf("array sorted\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	
	
}
