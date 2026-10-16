#include<stdio.h>
#include<signal.h>
#include<stdlib.h>
#include<string.h>
char *getString(void)
{
	char *s=NULL;
	int i=0;
	do 
	{
		s=realloc(s,i+1);
		s[i]=getchar();
	}while(s[i++]!='\n');
	s[--i]=0;
	return s;
}
int count(char *s)
{
	int count=1;
	while(s=strchr(s,' '))
	{
		count++;
		s++;
	}
	return count;
}
void f1()
{
	printf("enter \n");
	char *s=getString();
	int cnt=count(s);
	if(cnt>=5)
	{
		signal(SIGQUIT,SIG_DFL);
	}

//	printf("invalid \n");
}
int main()
{
		signal(SIGQUIT,f1);	
		while(1);
}

