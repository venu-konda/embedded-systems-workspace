#include<stdio.h>
int i,j,key,temp,flag;
int bubble(int *,int);
int selection(int *,int);
int insertion(int *,int);
int print(int *,int n);
int main()
{
    int arr[]={6,5,4,1,2};
    int n=sizeof(arr)/sizeof(*arr);
    printf("bubble sorting\n");
    bubble(arr,n);
    printf("selection sorting\n");
    selection(arr,n);
    printf("insertion sorting\n");
    insertion(arr,n);
    
}

int bubble(int *p,int n)
{
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
    print(p,n);
}

int selection(int *p,int n)
{
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(p[i]<p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    print(p,n);
}

int insertion(int *p,int n)
{
    for(i=1;i<n;i++)
    {
        key=p[i];
        for(j=i-1;(j>=0)&&(p[j]>key);j--)
        p[j+1]=p[j];
        p[j+1]=key;
    }/*
	 for(i=1;i<n;i++)
        {
                key=p[i];
                for(j=i-1;j>=0;j--)
                {
                        if(p[j]<key)
                                break;
                        p[j+1]=p[j];
                }
                p[j+1]=key;
        }*/

    print(p,n);
}

int print(int *p,int n)
{
    for(i=0;i<n;i++)
    printf("%d ",p[i]);

    printf("\n");
}
