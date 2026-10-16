#include "defines.h"
extern int count;
void save(PRODUCT *p)
{
	int i;
	FILE *fp;
	fp=fopen("productfile","w");
	fprintf(fp,"%3s %15s %10s %10s\n","sNo","name","price","quantity");
	for(i=0;i<count;i++)
	      fprintf(fp,"%2d. %15s %10f %10d\n",i+1,p[i].name,p[i].price,p[i].quantity);
	fclose(fp);
}
