#include<stdio.h>
int main()
{
	long double v=0;
	printf("var=%Lf\n",v);
	v=v-1;
	printf("octal=%o unsigned= %u int= %d float= %Lf hexa= %x\n",(int)v,(int)v,(int)v,v,(int)v);
}
