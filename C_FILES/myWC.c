#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *readFromFile(char *filename)
{
	FILE *fp;
	char *p=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s not found",filename);
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
long searchOccurance(char *p,char ch)
{
	long cnt=0;
	char *q=p;
	while(q=strchr(q,ch))
	{
		cnt++;
		q++;
	}
	return cnt;
}
int main(int argc,char *argv[])
{
	char *buf;
	long ccnt=0,lcnt=0,wcnt=0;
	if(argc!=2)
	{
		printf("incorrect input");
		exit(0);
	}
	buf=readFromFile(argv[1]);
	ccnt=strlen(buf);
	lcnt=searchOccurance(buf,'\n');
	wcnt=searchOccurance(buf,' ');
	printf("%ld %ld %ld ",ccnt,wcnt+lcnt,lcnt);
}

