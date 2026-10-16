#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
    char arr[20];
    char a[20];
    int n1=sizeof(a)/sizeof(a[0]);
    int n=sizeof(arr)/sizeof(arr[0]);
    srand(getpid());
    for(int i=0;i<n;i++)
    {
        arr[i]=(rand()%20+65);
        
    }
    for(int i=0;i<n1;i++)
    {
        a[i]=rand()%20+97;
    }
    for( int i=0;i<n;i++)
    {
        printf("%c ",arr[i]);
    }
    for( int i=0;i<n1;i++)
    {
        printf("%c ",a[i]);
    }
    char vowels[10]={65,69,73,79,85,97,101,105,111,117};
    int no=10;
    int count=0,count1=0;
    for(int i=0,k=0;i<n;i++,k++)
    {
        for(int j=0;j<no;j++)
        {
        if(((arr[i])==vowels[j])||((a[k])==vowels[j]))
        {
        count++;
        }
        }
    }
    //  for(int i=0;i<n1;i++)
    // {
    //     for(int j=0;j<no;j++)
    //     {
    //     if(a[i]==vowels[j])
    //     count1++;
    //     }
    // }
    printf("\n%d",count);
}
