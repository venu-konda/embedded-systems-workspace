#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int input(int *,int);
int print(int *,int);
int testunique(int *,int);
int secondhigh(int *,int);
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	input(arr,n);
	print(arr,n);
	int second=secondhigh(arr,n);
	printf("second=%d",second);
}


int input(int *p,int n)
{
    srand(getpid());
    for(int i=0;i<n;i++)
    {
    p[i]=rand()%100+1;
    if(testunique(p,i))
    i--;
    }
}
int testunique(int *p,int n)
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
}

int secondhigh(int *p,int n)
{
	int high=p[0],second=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(high<p[i])
			high=p[i];
		if((high>p[i])&&(second<p[i]))
			second=p[i];
	}
	printf("\nhigh=%d\n",high);
	return second;
	//printf("%d\n",second);
}



