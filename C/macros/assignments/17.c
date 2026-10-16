#include <stdio.h>
#define ISEQUAL(A, B) A == B
#define VAL !1
int main()
{
 #if ISEQUAL(VAL, 0)
 printf("OK");
 #else
 printf("NOT OK");
 #endif
 return 0;
}
