#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<pthread.h> //mutex copy
int fd;
char *p;
pthread_mutex_t m1;
//char ch='A';
pthread_t t1,t2;
void *f1(void *t1)
{
	pthread_mutex_lock(&m1);
	/*fd=open(p,O_CREAT|O_WRONLY,0660);
	if(fd<0)
	{
		perror("open");
		exit(0);
	}*/
	char ch='A';
	while(1)
	{
		write(fd,&ch,1);
		fflush(stdout);
		printf("%c",ch);
		usleep(50000);
	//	system("clear");
		if(ch=='Z')
			break;
		ch++;
	}
	pthread_mutex_unlock(&m1);
	pthread_exit(NULL);	
}
void *f2(void *t2)
{
	pthread_mutex_lock(&m1);
	char ch='a';
	while(ch<='z')
	{
		write(fd,&ch,1);
		fflush(stdout);
		printf("%c",ch);
		usleep(50000);
	//	system("clear");
	//	if(ch=='z')
	//		break;
		ch++;
	}
	pthread_mutex_unlock(&m1);
	pthread_exit(NULL);	
}


int main(int argc,char **argv)
{
	//int fd;
	//p=argv[1];

	fd=open("file",O_CREAT|O_WRONLY,0660);
	if(fd<0)
	{
		perror("open");
		exit(0);
	}
	pthread_mutex_init(&m1,NULL);
	pthread_create(&t1,NULL,f1,NULL);
	pthread_create(&t2,NULL,f2,NULL);
	//close(fd);
	pthread_exit(0);	
}
