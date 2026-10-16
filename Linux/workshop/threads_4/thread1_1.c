#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<unistd.h>
#include<limits.h>
pthread_t t1,t2,t3;
int arr[10];
void *p;
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
	srand(getpid());
	for(i=0;i<10;i++)
		arr[i]=rand()%20+1;
	for(i=0;i<10;i++)
		printf("%d ",arr[i]);
	printf("\n");
	pthread_exit((void *)1);
}
void *f2(void *t2)
{
	pthread_join(t3,&p);
	int i;
	printf("prime no.=");
	for(i=0;i<10;i++)
		if(checkPrime(arr[i]))
			printf("%d ",arr[i]);
	pthread_exit((void *)2);
}
void *f3(void *t3)
{
	pthread_join(t1,&p);
	int i,min,max;
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
	pthread_exit((void *)3);
}
int main()
{
	
	pthread_create(&t1,NULL,f1,NULL);
//	pthread_join(t1,&p);
	pthread_create(&t2,NULL,f2,NULL);
//	pthread_join(t2,&p);
	pthread_create(&t3,NULL,f3,NULL);
	pthread_join(t2,&p);
	pthread_exit(0);
}


