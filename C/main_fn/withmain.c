#include<stdio.h>
void f1();
void f2()
{
	printf("f2...\n");
	f1();
}
int main()
{
	printf("main fn\n");
	f2();
	printf("main fn2\n");

}
void f1()
{
	printf("f1...\n");
}

