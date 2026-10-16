#include<stdio.h>
union binary
{
	double d;
	long int a;
};
void print(union binary data)
{
	int i;
	for(i=63;i>=0;i--)
		printf("%ld",((data.a>>i)&1));
}
int main()
{
	union binary data;
	scanf("%lf",&data.d);
	print(data);
}
