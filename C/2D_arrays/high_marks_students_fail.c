#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void input(int [][5]);
void print(int [][5]);
//void print(int [][5]);
int main()
{
    int arr[20][5],i,j,sum,high=0,a,count,max=0,b,s[10];
   input(arr);
   print(arr);
   for(i=0;i<10;i++)
   {
       sum=0;
       for(j=0;j<5;j++)
       {
           sum+=arr[i][j];
       }
       if(sum>high)
       {
           high=sum;
           a=i;
       }
   }
   printf("\nhighest marks=%d",high);
   printf("\nstudent=%d",a+1);
   for(j=0;j<5;j++)
   {
       count=0;
       for(i=0;i<10;i++)
       {
           if(arr[i][j]<40)
           count++;
       }
       if(count>max)
       {
       max=count;
       b=j;
       }
   }
    printf("\nfailed no of student=%d",max);
    printf("\nmax students failed in  %d  subject\n",b+1);
}
void input(int arr[][5])
{
    int i,j;
     srand(getpid());
    for(i=0;i<10;i++)
    {
        for(j=0;j<5;j++)
        {
            arr[i][j]=rand()%100+1;
        }
    }
}
void print(int arr[][5])
{
    int i,j;
    for(i=0;i<10;i++,printf("\n"))
    {
        for(j=0;j<5;j++)
        {
            printf("%*d ",3,arr[i][j]);
        }
    }
}
