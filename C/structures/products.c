#include <stdio.h>

typedef struct Product
{
	char name[20];
	float price;
	int quantity;
}PRODUCT;
int count;
void ViewCart(PRODUCT *p,int n);
void AddToCart(PRODUCT *p,int n);
int main()
{
	PRODUCT arr[5];
	AddToCart(arr,5);
	ViewCart(arr,5);
}

void AddToCart(PRODUCT *p,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("enter the name of product=");
		scanf("%s",p[i].name);
		printf("enter the price of product=");
		scanf("%2f",&p[i].price);
		__fpurge(stdin);
		printf("enter the quantity of product=");
		scanf("%d",&p[i].quantity);
	}
}

void ViewCart(PRODUCT *p,int n)
{
	int i;
	
	printf("\n%3s %15s %10s %10s\n","sNo","name","price","quantity");
	for(i=0;i<n;i++)
	{
		printf("%2d. %15s %10f %10d\n",i+1,p[i].name,p[i].price,p[i].quantity);
	}
}

