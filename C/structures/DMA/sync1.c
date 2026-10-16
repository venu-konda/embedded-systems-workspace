#include "defines.h"
extern int count;
PRODUCT *syncFromFile(PRODUCT *p)
{
	FILE *fp;
	fp=fopen("productfile","r");
	if(fp==NULL)
		return NULL;
	fseek(fp,0,2);
	long size=ftell(fp);
	rewind(fp);
	count=size/sizeof(PRODUCT *);
	p=calloc(count,sizeof(PRODUCT));
	int i;
	for(i=0;i<count;i++)
		fscanf(fp,"%s %f %d",p[i].name,&p[i].price,&p[i].quantity);
	fclose(fp);
	return p;
}
