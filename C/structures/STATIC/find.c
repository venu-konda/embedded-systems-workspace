#include "defines.h"
extern int count;
void find(PRODUCT *p)
{
	char s[20];
	int i,j=1;
	__fpurge(stdin);
	printf("enter the name you want to find::");
	scanf("%s",s);
	printf("%3s %15s %10s %10s\n","sNo","name","price","quantity");
	for(i=0;i<count;i++)
	{
		if(strstr((p[i].name),s))
		{
			printf("%3d. %15s %10f %10d\n",j++,p[i].name,p[i].price,p[i].quantity);
		}
	}

}
