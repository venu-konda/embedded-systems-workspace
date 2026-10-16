#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
	int min,max,data,i,count,s;
	printf("enter minimum range of data=");
	scanf("%d",&min);
	printf("enter maximum range of data=");
	scanf("%d",&max);
	s=sqrt(data);
	for(data=min;data<=max;data++)
	{
		count=0;
		for(i=1;i<=s;i++)
	{
			if((data%i==0))
			{
				count++;
				break;
			}
		}
		if(count==2)
		{
			//fflush(stdout);
		 printf("%d,",data);
         }}
	exit(0);
}
