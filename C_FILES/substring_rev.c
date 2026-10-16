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
	p[size-1]=0;
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
void *subStringRev(char *buf,char *s)
{
	char rev[100];
	strRev(s,rev);
	char *p=buf;
	char *q;
	p=strtok(buf," ");
	while(p)
	{
		q=p;
		p=strtok(NULL," ");
		if(strcmp(q,s)==0)
		{
			strcpy(q,rev);
		}
	
		*(q+strlen(q))=' ';
	}
	p=buf;
	p=strtok(buf,"\n");
	while(p)
	{
		q=p;
		p=strtok(NULL,"\n");
		if(strcmp(q,s)==0)
		{
			strcpy(q,rev);
		}
	
		*(q+strlen(q))='\n';
	}
	return buf;

}
int main(int argc,char *argv[])
{
	int i;
	char *buf=NULL;
	buf=readFromFile(argv[1]);
	buf=subStringRev(buf,argv[3]);
	writeToFile(buf,argv[2]);
}
