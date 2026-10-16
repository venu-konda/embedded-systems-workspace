#include<stdio.h>
#include<stdlib.h>
#include "uart.h"
void WriteToFile(char *s)
{
	int i,j,k=1;
	FILE *fp;
	//char str[100];
	fp=fopen("data.xls","a");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}

	fprintf(fp,"%s,","s.no");
	fprintf(fp,"%s,","name");
	fprintf(fp,"%s,","id");
	fprintf(fp,"%s,","status");
	fprintf(fp,"%s\n","time");
	fprintf(fp,"%d,",k++);
	for(i=0;s[i];i)
	{
		//fprintf(fp,"%d,",k++);
		for(j=i;s[j]!='\n';j++)
		{
			fprintf(fp,"%c",s[j]);
		}
		i=j+1;
		fprintf(fp,"%c,",' ');
	}
	fclose(fp);

}
