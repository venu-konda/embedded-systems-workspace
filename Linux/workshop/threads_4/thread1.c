#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
pthread_t t1,t2,t3;
int arr[10];
int flag=0;
int checkPrime(int data)
{
	int i;
	if(data==1||data==0)
		return 0;
	for(i=2;i<=data/2;i++)
		if(data%i==0)
			return 0;
	return 1;
}
void *f1(void *t1)
{
	int i;
	while(flag!=0);
	srand(getpid());
	for(i=0;i<10;i++)
		arr[i]=rand()%20+1;
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
//	printf("\b\b.\n\n");
	printf("\n");
	flag=1;
//	pthread_exit(0);
}
void *f2(void *t2)
{
	int i;
	while(flag==0);
	printf("prime no.=");
	for(i=0;i<10;i++)
		if(checkPrime(arr[i]))
			printf("%d ",arr[i]);
//	pthread_exit(0);
}
void *f3(void *t3)
{
	int i,min,max;
	while(flag==0);
	min=INT_MAX;
	max=INT_MIN;
	for(i=0;i<10;i++)
	{
		if(arr[i]<min)
			min=arr[i];
		if(arr[i]>max)
			max=arr[i];
	}
	printf("max=%d  min=%d\n",max,min);
//	pthread_exit(0);
}
int main()
{
	pthread_create(&t1,NULL,f1,NULL);
	pthread_create(&t2,NULL,f2,NULL);
//	pthread_exit(0);
//	printf("\nhdhj\n");
	pthread_create(&t3,NULL,f3,NULL);
	pthread_exit(0);
}


