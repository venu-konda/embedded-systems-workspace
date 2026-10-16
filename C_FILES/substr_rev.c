#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strRev(char *p,char *q)
{
	int i,j;
	for(j=strlen(p)-1,i=0;j>=0;i++,j--)
	{
		q[i]=p[j];
	}
	q[i]=0;
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("incorrect input");
		exit(0);
	}
	FILE *src;
	char s[100],rev[50],*p;
	src=fopen(argv[1],"r+");
	if(src==NULL)
	{
		printf("file not found");
		exit(0);
	}
	strRev(argv[2],rev);
	while(fgets(s,100,src))
	{
		p=s;
		while(p=strstr(p,argv[2]))
				{
					strncpy(p,rev,strlen(rev));
				}
		fseek(src,-strlen(s),1);
		fputs(s,src);
	}
	fclose(src);
}
