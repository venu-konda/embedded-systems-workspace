#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
char *Myitoa(int,char *);
int main(int argc,char **argv)
{
	static int i=0,j, n;
	char s[100];
	for(i=1;i<argc-1;i++)
	{
		if(*argv[i]=='/')
		{
			n=(atoi(argv[i-1])/atoi(argv[i+1]));
			//free(s);
			Myitoa(n,s);
			strcpy(argv[i-1],s);
			for(j=i;j<argc-2;j++)
				strcpy(argv[j],argv[j+2]);
			argc-=2;
			i--;

		}
		else if(*argv[i]=='*')
		{
			n=(atoi(argv[i-1]))*(atoi(argv[i+1]));
			//free(s);
			Myitoa(n,s);
			strcpy(argv[i-1],s);
			for(j=i;j<argc-2;j++)
				strcpy(argv[j],argv[j+2]);
			argc-=2;
			i--;
		}
	}
	for(i=1;i<argc;i++)
	{
		if(*argv[i]=='+')
		{
			n=atoi(argv[i-1])+atoi(argv[i+1]);
			Myitoa(n,s);
			strcpy(argv[i-1],s);
			for(j=i;j<argc-2;j++)
				strcpy(argv[j],argv[j+2]);
			argc-=2;
			i--;

		}
		else if(*argv[i]=='-')
		{
			n=atoi(argv[i-1])-atoi(argv[i+1]);
			Myitoa(n,s);
			strcpy(argv[i-1],s);
			for(j=i;j<argc-2;j++)
				strcpy(argv[j],argv[j+2]);
			argc-=2;
			i--;
		}
	}
	//for(i=0;i<argc;i++)
	printf("%s\n",(argv[1]));
}

char *Myitoa(int n,char *s)
{
	int i=0,l;char temp;
	//static char s[100];
	for(n;n;n/=10)
	{
		s[i]=n%10+48;
		i++;
	}
	s[i]=0;
	l=strlen(s);
	for(i=0;i<l/2;i++)
	{
		temp=s[i];
		s[i]=s[l-i-1];
		s[l-i-1]=temp;
	}
	return s;

}
