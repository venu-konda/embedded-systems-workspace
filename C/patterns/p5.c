#include<stdio.h>
int main()
{
int a,b,A,n;
scanf("%d",&n);
for(a=(-n);a<=n;a++,printf("\n"))
{
A=(a<0)?-a:a;

for(b=0;b<=n;b++)
{
if((A+b+1)>n)
{
printf("* ");
}
else
{
printf(" ");
}
}
}
}
