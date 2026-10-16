#include<stdio.h>
int main()
{
	char a;
	printf("enter any character=");
	scanf("%c",&a);
	((a>=65)&&(a<=90))?printf("converted to upper to lower=%c",a=(a^(1<<5))):((a>=97)&&(a<=122))?printf("converted to lower to upper=%c",a=(a^(1<<5))):0;
		}
