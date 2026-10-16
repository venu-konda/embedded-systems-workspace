#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int input(int *,int);
int print(int *,int);
int testunique(int *,int);
int highest(int *,int);
int secondhigh(int *,int,int);
int main()
{
    int arr[10],high;
    input(arr,10);
    print(arr,10);
    high=highest(arr,10);
    printf("\nhighest=%d",high);
    int second=secondhigh(arr,10,high);
   printf("\nsecond highest=%d",second);
    
    
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

int highest(int *p,int n)
{
    int high=p[0];
    for(int i=1;i<n;i++)
    {
        if(high<p[i])
        high=p[i];
    }
    return high;
}
int secondhigh(int *p,int n,int high)
{
    int second=p[0];
    for(int i=1;i<n;i++)
    {
        if((second<p[i])&&(p[i]<high))
        second=p[i];
    }
    return second;
}

