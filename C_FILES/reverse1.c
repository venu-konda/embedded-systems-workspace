#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void StrRev(char*s)
{
	int l=strlen(s)-1;
	int i;
	char temp;
	for(i=0;i<(l/2);i++)
	{
		temp=s[i];
		s[i]=s[l-i-1];
		s[l-i-i]=temp;
	}
}
int main(int c,char*v[])
{
	if(c!=3)
	{
	printf("incorrect exp");
	exit(0);
	}
	FILE *src,*dest;
	src=fopen(v[1],"r");
	if(src==NULL)
	{
		printf("file not found");
		exit(0);
	}
	dest=fopen(v[2],"w");
	char s[100];
	while(fgets(s,100,src))
	{
		StrRev(s);
		fputs(s,dest);
	}
	fclose(src);
	fclose(dest);

}
