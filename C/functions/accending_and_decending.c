#include<stdio.h>
int accending(int);
int decending(int);
int low=9,high=0;
int main()
{
    int data;
    scanf("%d",&data);
    if(accending(data)) printf("accending");
    else if(decending(data))printf("decending");
    else printf("not in order");
}
int accending(int var)
{
    int r;
        r=var%10;
        if(var)
        {
        if(r<=low)
        {
        low=r;
        accending(var/10);
        }
        else return 0;
        }
        else return 1;
   
}
int decending(int var)
{
    int r;
    r=var%10;
    if(var)
    {
    if(r>=high)
    {
    high=r;
    decending(var/10);
    }
    else return 0;
    }
    else return 1;

    
}
