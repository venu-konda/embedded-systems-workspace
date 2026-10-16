#include<stdio.h>
int main()
{
	int a=0,i;
	char c='a';
	char *c1=&c;
	for(i=0;i<1000000001;i++)
		a=i;
	printf("%d\n",a);
	//a=printf("\10");
	//printf("%d",a);
//	printf('c');

}
