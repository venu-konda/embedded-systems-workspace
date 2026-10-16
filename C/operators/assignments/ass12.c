#include<stdio.h>
int main(){
int a,b,c;
int result;
printf("enter 3 integers:");
scanf("%d%d%d", &a,&b,&c);
result= (a<0) &&(b<0)&&(c<0);
printf("%d\n",result);
result=(a>b)&&(b>c);
printf("%d\n",result);
}

