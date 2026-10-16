#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int cnt;
void *readFromFile(char *filename)
{
	FILE *fp;
	char (*p)[100]=NULL;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	char s[100];
	while(fgets(s,100,fp))
	{
		p=realloc(p,(cnt+1)*100);
		strcpy(p[cnt],s);
		cnt++;
	}
	fclose(fp);
	return p;
}

void * delete(char (*p)[100],int s,int e)
{
	if((s>e)||(s<1)||(s>cnt))
			printf("error line no");
	else
	{
		memmove(p+s-1,p+e+1,(cnt-(e-s+1))*sizeof(*p));
		cnt=cnt-(e-s+1);
		p=realloc(p,cnt*sizeof(*p));
	}
	return p;
}
void writeToFile(char (*p)[100],char *filename)
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
	if(argc!=4)
	{
		printf("incorrect input");
		exit(0);
	}
	char (*lines)[100]=NULL;
	lines=readFromFile(argv[1]);
	lines=delete(lines,atoi(argv[2]),atoi(argv[3]));
	writeToFile(lines,argv[1]);
}
