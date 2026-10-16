#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
int main()
{
	int arr[10],k,i,j;
	srand(getpid());
	for(i=0;i<10;i++)
		arr[i]=rand()%10+1;
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	int least[10],a=0,count=0,count2=INT_MAX;
	for(i=0;i<10;i++)
	{
		count=0;
		for(j=0;j<10;j++)
		{
			if(arr[i]==arr[j])
				count++;
		}
			least[i]=count;
	}


	for(i=0;i<a;i++)
		printf("%d ",least[i]);

}
