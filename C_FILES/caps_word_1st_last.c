#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void *readFromFile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fseek(fp,0,2);
	long size=ftell(fp);
        rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]=0;
	fclose(fp);
	return p;
		
}
char *caps(char *s)
{
	int i;
	if(s[0]>=97&&s[0]<=122)
		s[0]^=32;
	if(s[strlen(s)-1]>=97&&s[strlen(s)-1]<=122)
		s[strlen(s)-1]^=32;
	for(i=0;s[i];i++)
	{
		if((s[i]=='\n')||(s[i]=='\0')||(s[i]==' '))
		{
			if(s[i-1]>=97&&s[i-1]<=122)
				s[i-1]^=32;
			if(s[i+1]>=97&&s[i+1]<=122)
				s[i+1]^=32;
		}
	}
	return s;
}
void writeToFile(char *buf,char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(buf,strlen(buf),1,fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("incorrect data");
		exit(0);
	}
	char *buf=NULL;
	buf=readFromFile(argv[1]);
	buf=caps(buf);
	writeToFile(buf,argv[1]);
}
