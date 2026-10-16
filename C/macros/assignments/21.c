#include<stdio.h>
#define hello(x) printf("a"#x" = %d",a##x)
int a3=45;
int main()
{
#ifdef a3
 hello(3);
#else
 printf("VECTOR");
#endif
 
return 0;
}
