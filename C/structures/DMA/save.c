#include "defines.h"
extern int count;
void save(PRODUCT *cart)
{
	FILE *fp;
	fp=fopen("productfile","w");
	fwrite(cart,sizeof(PRODUCT),count,fp);
	fclose(fp);
}
