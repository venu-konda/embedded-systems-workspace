#include "defines.h"
extern int count;
void Delete(PRODUCT *p)
{
	char s[20];
	__fpurge(stdin);
	printf("enter name to delete::");
	scanf(" %s",s);
	int i;
	for(i=0;i<count;i++)
	{
		if((strcmp((p[i].name),s))==0)
		{
			memmove(p+i,p+i+1,(count-i-1)*sizeof(PRODUCT));
			count--;
			i--;
		}
 	}
}
