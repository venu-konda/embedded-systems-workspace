#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
int i,j,l1,l2,l3;
int mydigit(char *);
int move(char *);
int main()
{
	char s[25],s1[25],s2[25];
INPUT:
	printf("enter the input:");
	__fpurge(stdin);
	scanf("%[^\n]s",s);
//ets(s);
	if(mydigit(s))
	{
		printf("error please enter the numeric digit\n");
		goto INPUT;
	}
	strcpy(s1,s);
	// printf("%s",s1);
	if(!move(s1))
	{
		printf("error please enter the correct format of data\n");
		goto INPUT;
	}
	move(s1);

	// printf("%s",s1);
	// printf("\n");
	l1=strlen(s1);
	if(s[l1]==' ')
		l1++;
	else if((s[l1+1]=='*')||(s[l1+1]=='/')||(s[l1+1]=='-')||(s[l1+1]=='+'))
        {
                 printf("error please enter the correct format of data\n");
                goto INPUT;
        }

	strcpy(s2,s+l1+1);
	// printf("%d",l1);
	int n1,n2,sum;
	n1=atoi(s1);
	n2=atoi(s2);

	if(s[l1]=='+')
	{
		sum=n1+n2;
		printf("%d",sum);
	}
	else if(s[l1]=='-')
	{
		sum=n1-n2;
		printf("%d",sum);
	}
	else if(s[l1]=='*')
	{
		sum=n1*n2;
		printf("%d",sum);
	}
	else if(s[l1]=='/')
	{
		sum=n1/n2;
		printf("%d",sum);
	}
	else if(s[l1]=='\n')
		printf("error you didn't supplied any operator");
}
int mydigit(char *p)
{
	for(p;*p;p++)
		if(!(((*p>='0')&&(*p<='9'))||(*p=='-')||(*p=='+')||(*p=='*')||(*p=='/')||(*p==' ')))
			return 1;
	return 0;
}

int move(char *p)
{
	int a=0;
	i=0;
	if((*p=='-')||(*p=='+'))
	{
		i++;
		a=1;
	}
	else if((*p=='*')||(*p=='/'))
		return 0;
		
	for(i;;i++)
		if((p[i]=='+')||(p[i]=='-')||(p[i]=='*')||(p[i]=='/')||(p[i]==' '))
			break;
	p[i]='\0';

}
