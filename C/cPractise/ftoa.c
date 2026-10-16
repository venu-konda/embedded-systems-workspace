#include<stdio.h>
#include<string.h>
void strRev(char *s)
{
	char temp;
	int i=strlen(s)-1,j=0;
	for(;j<i;i--,j++)
	{
		temp=s[i];
		s[i]=s[j];
		s[j]=temp;
	}
}
int main()
{
	float f;
	char s[100],s1[100];
	scanf("%f",&f);
	int sum,i,j=0;
	sum=f;
	for(i=sum;i;i/=10)
	{
		s[j++]=(i%10)+48;
	}
	s[j]=0;
	strRev(s);
	s[j++]='.';
	s[j]=0;
	sum=((f-sum)*1000000);
	printf("%d\n",sum);
	for(i=sum,j=0;i;i/=10)
	{
		s1[j++]=(i%10)+48;
	}
	s1[j]=0;
	strRev(s1);
	printf("%s\n",s1);
	strcat(s,s1);
	printf("%s\n",s);

}
