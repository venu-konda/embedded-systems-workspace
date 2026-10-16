#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char s[30];
	fgets(s,30,stdin);
	int l=strlen(s);
	//sir logic
	// char *p;
	// p=s+strlen(s)/2;
	// if(p!=s)
	// {
	// memmove(p+1,p,strlen(p)+1);
	// *p='*';
	// }
	// printf("%s",s);


	memmove(s+(l/2)+1,s+(l/2),(l/2)+1);
	strncpy(s+(l/2),"*",1);

	printf("%s",s);
}
