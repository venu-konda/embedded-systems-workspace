#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
void strRev(char *a,char *b)
{
	int i,j=0;
	for(i=strlen(a)-1;i>=0;i--)
		b[j++]=a[i];
	b[j]='\0';
}
int main()
{
	char s[33],q[33];
	int sum=0,i,j=0;
	fgets(s,33,stdin);
	strRev(s,q);
	printf("%s\n",q);
/*	for(i=strlen(s)-1;i>=0;i--)
	{
		sum+=(pow(2,i)*(s[j++]-48));
//		printf("sum=%d\n",sum);
	}*/
	for(i=0;q[i];i++)
	{
		sum+=((pow(2,i))*(q[i]-48));
	}
/*	long long num=atoi(s);
	while(num)
	{
	//	printf("num=%d\n",num);
		sum+=((num%10)*pow(2,j++));
		num/=10;
	}*/
	printf("%d\n",sum);
}
