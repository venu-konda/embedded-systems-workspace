#include<stdio.h>
#define hello(x) printf("a"#x" = %d",a##x)
#define A3
int a3=45;
int main()
{
#ifdef A3
 hello(3);
#else
 printf("VECTOR");
#endif 
return 0;
}

