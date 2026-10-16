#include<stdlib.h>
#include <stdio.h>
int isprime(int a)
{
    int i,count=0;
    for(i=2;i<a;i++)
    if(a%i==0)
    count++;
    if(count==0)
    return 1;
    else return 0;
}
int main()
{
    int n,*p,i,s,data;
    scanf("%d",&n);
    p=malloc(n*sizeof(int));
    scanf("%d",&s);
    for(data=s,i=0;i<n;data++)
    {
        if(isprime(data))
        {
        p[i]=data;
        i++;
        }
        
    }
    for(i=0;i<n;i++)
    printf("%d,",p[i]);
}

