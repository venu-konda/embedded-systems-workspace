#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
int cnt=0;
void * readFromFile(char *filename)
{
	FILE *fp;
	char (*line)[100]=NULL;
	char s[100];
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	while(fgets(s,100,fp))
	{
		line=realloc(line,(cnt+1)*100);
		strcpy(line[cnt],s);
		cnt++;
	}
	fclose(fp);
	return line;
}
void * delete(char (*p)[100],int line)
{
	if(line>cnt || line<1)
	printf("invalid line no");
	else
	{
		memmove(p+line-1,p+line,(cnt-line)*sizeof(*p));
		cnt--;
		p=realloc(p,cnt*sizeof(*p));
	}
	return p;
}
void writeFromFile(char (*p)[100],char *filename)
{
	FILE *fp;
	fp=fopen(filename,"w");
	int i;
	for(i=0;i<cnt;i++)
		fputs(p[i],fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("incorrect input");
		exit(0);
	}
	char (*p)[100]=NULL;
	p=readFromFile(argv[1]);
	p=delete(p,atoi(argv[2]));
	writeFromFile(p,argv[1]);

}
