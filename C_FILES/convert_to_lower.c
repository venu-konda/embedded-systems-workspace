#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void readFromFile(char *sfilename,char *dfilename)
{
	FILE *src,*dest;
	char *p;
	src=fopen(sfilename,"r");
	if(src==NULL)
	{
		printf("%s not found",sfilename);
		exit(0);
	}
	dest=fopen(dfilename,"w");
	char ch;
	while((ch=fgetc(src))!=EOF)
	{
		if(ch>=65&&ch<=90)
		{
			ch+=32;
			fputc(ch,dest);
		}
		else
			fputc(ch,dest);
	}
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("invalid input");
		exit(0);
	}
	char *buf=NULL;
	readFromFile(argv[1],argv[2]);

}
