#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void input(int *,int);
void print(int *,int);
int testRepeated(int *,int);
int reorder(int *,int);
int accending(int *,int);
int decending(int *,int,int);
int checkprime(int *,int);
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    printf("random array\n");
    print(arr,n);
    reorder(arr,n);
    printf("sorted prime first\n");
    print(arr,n);
    int a=reorder(arr,n);
    accending(arr,a);
    printf("accending order of prime\n");
    print(arr,n);
    decending(arr,a,n);
    printf("accending of prime and decending of non prime\n");
    print(arr,n);
}

void input(int *p,int n)
{
    int i;
    srand(getpid());
    for(i=0;i<n;i++)
    {
    p[i]=rand()%39+2;
    if(testRepeated(p,i))
    i--;
    }
}
int testRepeated(int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        if(p[i]==p[n])
        return 1;
    }
    return 0;
}

void print(int *p,int n)
{
    for(int i=0;i<n;i++)
    printf("%d ",p[i]);
    printf("\n");
}
int reorder(int *p,int n)
{
    int i,temp,j=0;
    for(i=0;i<n;i++)
    {
        if(checkprime(p,i))
        {
            temp=p[i];
            p[i]=p[j];
            p[j]=temp;
            j++;
        }
    }
    return j;
      /*  printf("sorted prime first\n");
        print(p,n);
        accending(p,j);
        printf("accending order\n");
        print(p,n);
        decending(p,j);*/
}
int checkprime(int *p,int n)
{
    int i,count=0;
    for(i=2;i<p[n];i++)
    {
        if(p[n]%i==0)
        count++;
    }
    if(count==0)
    return 1;
    else
    return 0;
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

int decending(int *p,int a,int n)
{
    int i,j,temp,flag;
    for(i=n-1;i>a;i--)
    {
        flag=1;
        for(j=a;j<i;j++)
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
