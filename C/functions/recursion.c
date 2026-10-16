#include<stdio.h>
int main(int g)
{
	printf("in main g=%d\n",g);
	if(g<5)
		main(g+1);
	printf("bye for main\n");

}

