#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void strRev(char *s)
{
	int i;
	char temp;
	int l=strlen(s)-1;
	for(i=0;i<(l/2);i++)
	{
		temp=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=temp;
	}
}
int main(int argc,char *argv[])
{
	FILE *src,*dest;
	char s[100];
	if(argc!=3)
	{
		printf("incorrect input");
		exit(0);
	}
	src=fopen(argv[1],"r");
	if(src==NULL)
	{
		printf("file not found");
		exit(0);
	}
	dest=fopen(argv[2],"w");
	while(fgets(s,100,src))
	{
		strRev(s);
		//fseek(src,-strlen(s),1);
		fputs(s,dest);
	}
	fclose(src);
	fclose(dest);

}
