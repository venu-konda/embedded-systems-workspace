#include "defines.h"
 char *getString(void)
{
	char *p=NULL;
	__fpurge(stdin);
	int i=0;
	do
	{
		p=realloc(p,(i+1)*1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}

