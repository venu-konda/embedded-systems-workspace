#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int input(char *,int);
int print(char *,int);
int countvowels(char *);
int test_unique(char *,int);
int main()
{
    char arr[20];
    int n=20;
    input(arr,n);
    print(arr,n);
    printf("\ncount=%d",countvowels(arr));
}

int input(char *p,int n)
{
    int i;
    srand(getpid());
    for(i=0;i<n;i++)
    {
        if(rand()%2)
        p[i]=rand()%26+65;
        else
        p[i]=rand()%26+97;
        if(!test_unique(p,i))
        i--;
    }
}
int test_unique(char *p,int i)
{
    for(int j=0;j<i;j++)
    {
        if(p[i]==p[j])
        return 0;
    }
    return 1;
}
int print(char *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%c ",p[i]);
    }
}
int countvowels(char *p)
{ int count=0;
    char vowels[10]={'a','e','i','o','u','A','E','I','O','U'};
    for(int i=0;i<20;i++)
    {
        for(int j=0;j<10;j++)
        {
            if(p[i]==vowels[j])
            {
                count++;
            }
        }
        
    }
    return count;
}

