#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void *readFromFile(char *filename)
{
	FILE *fp;
	char *p;
	long int size;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fseek(fp,0,2);
	size=ftell(fp);
	rewind(fp);
	p=calloc(1,size+1);
	fread(p,size,1,fp);
	p[size]=0;
	fclose(fp);
	return p;
}
char *replaceOcc(char *str,char *s1,char *s2)
{
	long l1,l2,i;
	char *p=str;
	l1=strlen(s1);
	l2=strlen(s2);
	while(p=strstr(p,s1))
	{
		i=p-str;
		if(l2>l1)
		{
			str=realloc(str,strlen(str)+1+l2-l1);
			if(str+i!=p)
				p=str+i;
			memmove(p+l2,p+l1,strl-- en(p+l1)+1);
		}
		else if(l2<l1)
		{
			memmove(p+l2,p+l1,strlen(p+l1)+1);
			str=realloc(str,strlen(str)+1);
		}
		strncpy(p,s2,l2);
		p=p+l2;
	}
	return str;
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
	if(argc!=4)
	{
		printf("incorrect data");
		exit(0);
	}
	char *buf;
	buf=readFromFile(argv[1]);
	buf=replaceOcc(buf,argv[2],argv[3]);
	writeToFile(buf,argv[1]);
}
