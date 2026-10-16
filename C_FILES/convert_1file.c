#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void readFromFile(char *sfilename)
{
	FILE *src;
	char *p=NULL;
	src=fopen(sfilename,"r+");
	if(src==NULL)
	{
		printf("%s not found",sfilename);
		exit(0);
	}
	fseek(src,0,2);
	long size=ftell(src);
	rewind(src);
	p=calloc(1,size+1);
	fread(p,size,1,src);
	p[size]=0;
	//dest=fopen(dfilename,"w");
	char ch;
	int i;
	for(i=0;p[i];i++)
	{
		if(p[i]>=97&&p[i]<=122)
		{
			p[i]-=32;
			fputc(p[i],src);
		}
		else
			fputc(p[i],src);
	}
}
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("invalid input");
		exit(0);
	}
	char *buf=NULL;
	readFromFile(argv[1]);

}
