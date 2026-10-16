#include <stdio.h>
#include<stdlib.h>
#include<unistd.h>
int high=0,second=0,third=0;
int main()
{
	int arr[10],i;
	srand(getpid());
	for(i=0;i<10;i++)
	{
	//	arr[i]=(rand()%100)+500;
		scanf("%d",&arr[i]);
	}
	for(i=0;i<10;i++)
		printf("%d,",arr[i]);
	for(i=0;i<10;i++)
	{
		if(high<arr[i])
		{
			third=second;
			second=high;
			high=arr[i];
		}
		if(second<arr[i]&&arr[i]!=high)
		{
			third=second;
			second=arr[i];
		}
		if(third<arr[i]&&arr[i]!=high&&arr[i]!=second)
			third=arr[i];
	}
	printf("\nhigh=%d\n",high);
	printf("second=%d\n",second);
	printf("third=%d\n",third);
}
