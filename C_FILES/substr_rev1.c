#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
void strrev(char *p)
{
	char temp;
	int i,l;
	l=strlen(p);
	for(i=0;i<(l/2);i++)
	{
		temp=p[i];
		p[i]=p[l-i-1];
		p[l-i-1]=temp;
	}
}
void writeToFile(char *filename,char *p)
{
	FILE *fp;
	fp=fopen(filename,"w");
	fwrite(p,strlen(p),1,fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("incorrect data");
		exit(0);
	}
	char *buf=NULL;
	char *p;
	char q[10];
	char rev[20];
	buf=readFromFile(argv[1]);
	int i;
	p=buf;
	strcpy(q,argv[2]);
        strrev(q);
	while(p=strstr(p,argv[2]))
	{
		strncpy(p,q,strlen(q));
		p+=strlen(q);
	}
	
	writeToFile(argv[1],buf);
}

