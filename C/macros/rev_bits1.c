#include<stdio.h>
#define REV_CON(data,l,r) ((data>>l)&1)!=((data>>r)&1)
#define REV_LOG(data,l,r) data^=l<<1; data^=r<<1;

int main()
{
    int data,l,r,i;
    scanf("%d",&data);
    for(i=31;i>=0;i--)
    printf("%d ",(data>>i)&1);
printf("\n");
printf("%d",data);
    for(l=31,r=0;l>r;r++,l--)
    {
        if(((data>>l)&1)!=((data>>r)&1))
        {
           data^=1<<l;
	   data^=1<<r;

        }
    }
    for(i=31;i>=0;i--)
    printf("%d ",(data>>i)&1);
    printf(" %d",data);
}
