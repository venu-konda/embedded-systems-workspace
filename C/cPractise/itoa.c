#include<stdio.h>
#include<string.h>
void strRev(char *s)
{
	char temp;
	int i,j=strlen(s)-1;
	for(i=0;j>i;j--,i++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	int data,i=0;
	char s[100];
	scanf("%d",&data);
	for(i=0;data;data/=10,i++)
	{
		s[i]=(data%10)+48;
	}
	s[i]=0;
	
	printf("%s\n",s);
	strRev(s);
	printf("%s\n",s);
}
