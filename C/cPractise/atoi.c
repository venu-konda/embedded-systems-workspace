#include<stdio.h>
#include<string.h>

int main()
{
	int rev=0,i;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i];i++)
		rev=rev*10+((s[i]-48));
	printf("%d\n",rev);
}
