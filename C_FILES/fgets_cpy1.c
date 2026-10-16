#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
	FILE *src,*dest;
	char str[100];
	if(argc!=3)
	{
		printf("no arguments\n");
		printf("no src and destination\n");
		exit(0);
	}
	src=fopen(argv[1],"r");
	if(src==NULL)
	{
		printf("file not found");
		exit(0);
	}

	dest=fopen(argv[2],"w");

	while(fgets(str,100,src))
		fputs(str,dest);


	fclose(src);
	fclose(dest);
}
