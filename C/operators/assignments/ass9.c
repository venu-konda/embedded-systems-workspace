#include<stdio.h>
int main(){
int a=10,b=11;
printf("%d\n", ++a > b--);
printf("a=%d b=%d\n",a,b);
a=10;b=11;
printf("%d\n",a++ < --b);
}

