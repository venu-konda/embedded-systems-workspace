#include<stdio.h>
#include<stdlib.h>
int main()
{
	char s[]="aaa\n124\nin\n12:11";
	int i,j,k=1;
	FILE *fp;
	//char str[100];
	fp=fopen("data.xls","w");
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	fprintf(fp,"%d,",k++);
	for(i=0;s[i];)
	{
		//fprintf(fp,"%d,",k++);
		for(j=i;((s[j]!='\n'));j++)
		{
			if(s[j]=='\0')
				break;
			fprintf(fp,"%c",s[j]);
		}
		i=j+1;
		fprintf(fp,"%c,",' ');
	}
	fprintf(fp,"%c\n",' ');
	fclose(fp);

}
