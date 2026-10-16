#include <stdio.h>
#include<stdlib.h>
#include<stdio_ext.h>
#include<string.h>
#define MAX 10
typedef struct Product
{
    char name[20];
    float price;
    int quantity;
}PRODUCT;


void ViewCart(PRODUCT *p);
void AddToCart(PRODUCT *p);
void Delete(PRODUCT *);
void find(PRODUCT *);
void sort(PRODUCT *);
void menu();
