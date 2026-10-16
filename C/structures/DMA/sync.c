#include "defines.h"
extern int count;
PRODUCT *syncFromFile(PRODUCT *cart)
{
	FILE *fp;
	fp=fopen("productfile","r");
	if(fp==NULL)
		return NULL;
	fseek(fp,0,2);
	long size=ftell(fp);
	rewind(fp);
	count=size/sizeof(PRODUCT);
	cart=calloc(count,sizeof(PRODUCT));
	fread(cart,sizeof(PRODUCT),count,fp);
	fclose(fp);
	return cart;
}
