#include "defines.h"
extern int count;
PRODUCT *sort(PRODUCT *p)
{
	int i,j;
	PRODUCT temp;
	for(i=0;i<count-1;i++)
	{
		for(j=i+1;j<count;j++)
		{
			if((strcmp((p[i].name),(p[j].name)))>0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	return p;
}


