#include<string.h>
#include<stdio.h>
int x,y,z;
int plai(char *p,char *q)
{
	int i,j,k,z;
	for(i=strlen(p)-1,j=0;i>=0;i--,j++)
		q[j]=p[i];
	q[j]='\0';
	return (strcmp(p,q));
}
int main()
{
	int count=0;
	char s[100],*p,q[100],*r;
	scanf("%[^\n]s",s);
//	printf("%s\n",s);
	p=strtok(s," ");
	while(p)
	{
		r=p;
		if(!(plai(r,q)))
			count++;
		p=strtok(NULL," ");

	}
	printf("%d\n",count);
}
