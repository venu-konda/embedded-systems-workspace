#include "defines.h"
int count;
int main()
{
	char choice;
	PRODUCT *arr=NULL;
	arr=syncFromFile(arr);
        while(1)
        {
                __fpurge(stdin);
                menu();
                printf("enter the choice=");
                scanf("%c",&choice);
                printf("-----------------------\n");
                switch(choice)
                {
                        case 'A':arr=AddToCart(arr);break;
                        case 'Q':return 0;
                        case 'V':ViewCart(arr);break;
                        case 'D':arr=Delete(arr);break;
                        case 'O':arr=sort(arr);break;
                        case 'F':find(arr);break;
                        case 'S':save(arr);break;
                }
        }
}
