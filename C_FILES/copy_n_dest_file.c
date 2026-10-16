#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char *readFromFile(char *filename)
{
	char *p;
	FILE *fp;
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
void writeToFile(char *buf,char *filename)
{
//	printf("%s",buf);
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(buf,strlen(buf),1,fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	int i;
	char *buf=NULL;
	buf=readFromFile(argv[1]);
	for(i=2;i<argc;i++)
		writeToFile(buf,argv[i]);
}
