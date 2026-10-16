#include<stdio.h>
union bin
{
	float f;
	int n;
};
void print(union bin data)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",((data.n>>i)&1));
}
int main()
{
	union bin data;
	scanf("%f",&data.f);
	print(data);
}
