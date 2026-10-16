#include "defines.h"
extern int count;
void find(PRODUCT *p)
{
	char *s=NULL;
	int i;
	printf("enter the name to find ::");
	s=getString();
	for(i=0;i<count;i++)
	{
		if(strstr((p[i].name),s))
		{
			printf("%10s %2f %2d \n",p[i].name,p[i].price,p[i].quantity);
		}
	}
}
