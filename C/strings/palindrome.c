#include<stdio.h>
#include<string.h>
int palindrome(char *,char *,int);
int main()
{
	/*(char s[30],temp[30];
	fgets(s,30,stdin);
	int l,i,j;
	l=strlen(s)-1;
	j=l;
	for(i=0;s[i];i++,j--)
		temp[j-1]=s[i];

	if(palindrome(s,temp,l))
		printf("it is a palindrome");
	else
		printf("not a palindrome");
}

int palindrome(char *p,char *q,int l)
{
	for(int i=0;i<l;i++)
	{
		if(!(p[i]==q[i]))
			return 0;
	}
	return 1;
}*/

// #include<stdio.h>
// #include<string.h>
// int main()
// {
     char s[30];
     fgets(s,30,stdin);
     int l,i,flag=1;
     l=strlen(s)-1;
     for(i=0;i<l/2;i++)
     {
         if(!(s[i]==s[l-i-1]))
         flag=0;
     }
     if(flag)
     printf("it is a palindrome");
     else
     printf("not a palindrome");
 }




///comparing with strcmp(s,temp)
///if same return 0

