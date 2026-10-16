#include<stdio.h>
#include<string.h>
int Alphabet(int );
int main()
{
	char s[30];
	gets(s);
	int l,i;
	l=strlen(s);
	for(i=0;s[i];i++)
	{
		if(Alphabet(s[i]))
		{
			memmove(s+i,s+i+1,l-i);	
			i--;
		}
	}
	printf("%s",s);

}
int Alphabet(int p)
{
	if(!(((p>='a')&&(p<='z'))||((p>='A')&&(p<='Z'))))
		return 1;
	return 0;
}
