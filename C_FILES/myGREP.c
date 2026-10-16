#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void myGREP(char *filename,char *sub)
{
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	char s[100];
	while(fgets(s,100,fp))
	{
		if(strstr(s,sub))
		{
			printf("%s \n",s);
		}
	}

	fclose(fp);	
}
int main(int argc,char *argv[])
{
	if(argc!=3)
	{
		printf("incorrect input");
		exit(0);
	}
	myGREP(argv[2],argv[1]);
}
