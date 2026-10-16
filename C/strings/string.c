#include<string.h>
#include<stdio.h>
void *strRev(char *p)
{
	int i,l,j;
	char s[100];
//	bzero(s,100);
	char temp;
	l=strlen(p);
	//printf("%d",l);
	for(i=0,j=l-1;i<j;j--,i++)
	{
		temp=p[j];
		p[j]=p[i];
	p[i]=temp;	
	//	printf("%c\n",s[i]);
	}
//	s[l]='\0';
	printf("%s\n",s);
	return s;
//	printf("%s",s);
}
int main()
{
	char s[]="this is vector";
	char *p,*q,*r;
	r=strRev(s);
//	printf("%s",p);
	p=strtok(r," ");
	q=strRev(p);
	printf("%s",q);
//hile(p)
	{
		q=strRev(p);
//	printf("%s",p);
		p=strtok(NULL," ");
		
		*(q+strlen(q))=32;
//		printf("%s\n",q);
}


}

