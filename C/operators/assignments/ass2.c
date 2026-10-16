#include<stdio.h>
int main()
{
int i1=5, i2=2;
 int i3;
 float f;
i3 = i1/i2;
f = i1/i2;
printf("i3=%d f=%f\n",i3,f);
 i3=i1/(float)i2;
f = (float)i1 / i2;
 printf("i3=%d f=%f\n",i3,f);
}

