#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<unistd.h>
#include<string.h>
#define MAX 5
typedef struct Product
{
    char name[20];
    float price;
    int quantity;
}PRODUCT;


void ViewCart(PRODUCT *p);
PRODUCT *AddToCart(PRODUCT *p);
PRODUCT *Delete(PRODUCT *p);
char *getString(void);
void find(PRODUCT *);
PRODUCT *sort(PRODUCT *);
void menu();
void save(PRODUCT *);
PRODUCT *syncFromFile(PRODUCT *);
