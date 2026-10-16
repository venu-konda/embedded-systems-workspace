#include<stdio.h>
union indian
{
	int x;
	char y;
};
int main()
{
	union indian v={1};
	if(v.y==1)
		printf("little indian");
	else
		printf("big indian");
}
