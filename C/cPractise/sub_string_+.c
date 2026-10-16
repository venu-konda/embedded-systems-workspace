#include<stdio.h>
#include<string.h>
#include<limits.h>
int main()
{
	char s[100];
	int l1,l2=INT_MAX;
	scanf("%[^\n]s",s);
	char *p,*q,*r;
	p=s;
	while(p=strtok(p," "))
	{
		q=p;
		l1=strlen(q);
		if(l1<l2)
		{
			l2=l1;
			r=p;
		}
		p=p+strlen(p);
		q[strlen(q)]= ' ';
	//	p=strtok(NULL," ");
	//	*(q+strlen(q))=' ';
	}
	for(;*r!=' ';r++)
		(*r)++;
	printf("%s\n",s);

}
