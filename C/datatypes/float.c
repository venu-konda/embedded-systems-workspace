#include<stdio.h>
int main()
{
	long double var=1234.5;
	printf("var=%Lf....%Le\n",var,var);
	var=var*1000;
	 printf("var=%Lf....%Le\n",var,var);
        var=var*10;
	 printf("var=%Lf....%Le\n",var,var);
}
