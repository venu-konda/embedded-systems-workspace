#include "defines.h"
extern int count;
void AddToCart(PRODUCT *p)
{
        printf("enter the name of product=");
	__fpurge(stdin);
        scanf("%s",p[count].name);
        printf("enter the price of product=");
        scanf("%2f",&p[count].price);
        printf("enter the quantity of product=");
        scanf("%d",&p[count].quantity);
    	count++;   
}

