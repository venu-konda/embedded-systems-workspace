#include<stdio.h>
union a
{
	int a;
	float b;
};
int main()
{
	union a bin;
	int i,j;
	float f;
	scanf("%f",&f);
	bin.b=f;
	for(i=31;i>=0;i--)
		printf("%d ",((bin.a>>i)&1));
	printf("\n");
	char *p,ch;
	p=&f;
	for(i=3;i>=0;i--)
	{
		ch=*(p+i);
		for(j=7;j>=0;j--)
			printf("%d ",((ch>>j)&1));
	}
	printf("\n");

}
