#include<string.h>
#include<stdio.h>
#include<signal.h>
void *f1()
{
	printf("Words are less than 5\n");
}

int main()
{
	char s[]="this is vector india";
	printf("enter \n");
	scanf("%[^\n]s",s);
	char *p;
	int cnt=0;
	p=strtok(s," ");
	cnt++;
	while(p=strtok(NULL," "))
	{
		cnt++;
		p++;
	}
	if(cnt<5)
	{
		signal(12,f1);
		raise(12);
	}
	else
	{
		printf("%d\n",cnt);
	}
}
