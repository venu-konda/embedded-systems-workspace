#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,rev=0,dot=0;
	float f,dec=1;
	char s[100];
	scanf("%s",s);
	for(i=0;s[i];i++)
	{
		if(s[i]=='.')
		{
			dot=1;
			i++;
		}
		rev=rev*10+(s[i]-48);
		if(dot==1)
			dec/=10;
	}
	f=rev*dec;
	printf("%f\n",f);
}
