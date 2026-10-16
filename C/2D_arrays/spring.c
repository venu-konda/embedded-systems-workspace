#include<stdio.h>
int main()
{
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    int r=4,c=4;
    int i,j,k=0,l=r-1,m=0,n=c-1;
    while(k<l&&m<n)
    {
        for(i=m;i<=n;i++)
        printf("%d ",arr[k][i]);
        k++;
        for(i=k;i<=l;i++)
        printf("%d ",arr[i][n]);
        n--;
        for(i=n;i>=m;i--)
        printf("%d ",arr[l][i]);
        l--;
        for(i=l;i>=k;i--)
        printf("%d ",arr[i][m]);
        m++;
    }
    
}
