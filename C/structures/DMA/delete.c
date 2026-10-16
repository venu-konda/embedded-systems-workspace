#include "defines.h"
extern int count;
PRODUCT *Delete(PRODUCT *p)
{
	char *s;
	__fpurge(stdin);
	s=getString();
	int i;
	for(i=0;i<count;i++)
	{
		if(strstr(s,(p[i].name)))
		{
			memmove(p+i,p+i+1,(count-i-1)*sizeof(PRODUCT));
			count--;
			i--;
			p=realloc(p,count*sizeof(PRODUCT));

		}
	}
	return p;
}
