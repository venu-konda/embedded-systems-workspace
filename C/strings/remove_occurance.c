#include<stdio.h>
#include<string.h>
int i,j,l;
int main()
{
	char s[30];
	fgets(s,30,stdin);
	l=strlen(s);
	for(i=0;s[i];i++)
	{
		for(j=i+1;s[j];j++)
		{
			if(s[i]==s[j])
			{
				memmove(s+j,s+j+1,l-j);
				j--;
			}
		}
	}
	printf("%s",s);

}


