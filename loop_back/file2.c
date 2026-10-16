#include<stdio.h>
#include<stdlib.h>
void WriteMenu()
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
	fclose(fp);

}
