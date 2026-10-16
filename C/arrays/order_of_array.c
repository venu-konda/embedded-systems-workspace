#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int input(int *,int);
int print(int *,int);
int accending(int *,int);
int decending(int *,int);
int checkUnique(int *,int);
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	print(arr,n);
	accending(arr,n);
	printf("accending\n");
	print(arr,n);
	decending(arr,n);
	printf("decending\n");
	print(arr,n);
	char a[10]={'v','e','c','t','o','r'};
	printf("%s\n",a);
}


int input(int *p,int n)
{
	srand(getpid());
	for(int i=0;i<n;i++)
	{
		p[i]=rand()%50+1;
		if(checkUnique(p,i))
			i--;
	}
}

int checkUnique(int *p,int n)
{
	for(int i=0;i<n;i++)
	{
		if(p[i]==p[n])
			return 1;
	}
			return 0;
}

int print(int *p,int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",p[i]);
	printf("\n");
}

int accending(int *p,int n)
{
	int i,j,temp,flag;
	for(i=n-1;i>0;i--)
	{
		flag=1;
		for(j=0;j<i;j++)
		{
			if(p[j]>p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				flag=0;
			}
		}
		if(flag==1)
			break;
	}
}

int decending(int *p,int n)
{
	int i,j,temp,flag;
	for(i=n-1;i>0;i--)
	{
		flag=1;
		for(j=0;j<i;j++)
		{
			if(p[j]<p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				flag=0;
			}
		}

		if(flag==1)
			break;
	}
}
