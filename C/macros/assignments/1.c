#include<stdio.h>
#define _vec(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;
	a -= 3;
	printf("a=%d\n",a);
	printf("%d %d\n", _vec(a), z);
}

#include<stdio.h>
#define x 5+5
int main()
{
	int i;
	i = x * x * x;
	printf("%d ",i);
}

#define CUBE(x) x*x*x
main()
{
	int a,b=3;
	a=CUBE(b++);
	printf("%d %d",a,b);
}

#include<stdio.h>
#define LOOP(a) int i;\
	for(i=1;i<=a;i++);\
	printf("%d ",i);
void main()
{
	LOOP(5);
}

