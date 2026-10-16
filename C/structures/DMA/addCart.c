#include "defines.h"
extern int count;
PRODUCT *AddToCart(PRODUCT *p)
{
	p=realloc(p,(count+1)*sizeof(PRODUCT));
	printf("enter the name of product=");
	scanf("%s",p[count].name);
        printf("enter the price of product=");
        scanf("%f",&p[count].price);
        printf("enter the quantity of product=");
        scanf("%d",&p[count].quantity);
    	count++;
  	return p; 
}

