#include<string.h>
#include<stdio.h>
#include<stdlib.h>
int cnt=0;
void *readFromFile(char *filename)
{
	char (*lines)[100]=NULL;
	FILE *fp;
	char s[100];
	fp=fopen(filename,"r");

	while(fgets(s,100,fp))
	{
		lines=realloc(lines,(cnt+1)*100);
		strcpy(lines[cnt],s);
		cnt++;
	}
	fclose(fp);
	return lines;
}

void *sort(char (*p)[100])
{
	int i,j;
	char temp[100];
	for(i=0;i<cnt-1;i++)
	{
		for(j=i+1;j<cnt;j++)
		{
			if((strlen(p[i]))>(strlen(p[j])))
			{
				strcpy(temp,p[i]);
				strcpy(p[i],p[j]);
				strcpy(p[j],temp);

			}
		}
	}
	return p;
}
void writeFromFile(char (*p)[100],char *filename)
{
	FILE *fp;
	int i;
	fp=fopen(filename,"w");
	for(i=0;i<cnt;i++)
		fputs(p[i],fp);
	fclose(fp);
}
int main(int argc,char *argv[])
{
	if(argc!=2)
	{
		printf("error");
		exit(0);
	}
	char (*lines)[100]=NULL;
	lines=readFromFile(argv[1]);
	lines=sort(lines);
	writeFromFile(lines,argv[1]);
}
