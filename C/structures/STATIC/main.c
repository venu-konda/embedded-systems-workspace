#include "defines.h"
int count;
int main()
{
	if(count==MAX)
		printf("MEMORY FULL \n remove elements to add");
	char choice;
        while(1)
        {
		PRODUCT arr[MAX];
                __fpurge(stdin);
                menu();
                printf("enter the choice=");
                scanf("%c",&choice);
                printf("-----------------------\n");
                switch(choice)
                {
                        case 'A':AddToCart(arr);break;
                        case 'Q':return 0;
                        case 'V':ViewCart(arr);break;
                        case 'D':Delete(arr);break;
                        case 'S':sort(arr);break;
                        case 'F':find(arr);break;
                }
        }
}
