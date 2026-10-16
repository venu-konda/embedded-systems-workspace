#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *src,*dest;
	char ch;
	src=fopen("data","r");
	if(src==NULL)
	{
		printf("file not found");
		exit(0);
	}
	dest=fopen("destfile","w");

	while((ch=fgetc(src))!=EOF)
		putc(ch,dest);


	fclose(src);
	fclose(dest);
}
