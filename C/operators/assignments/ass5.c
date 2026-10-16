#include<stdio.h>
 int main()
{
int i=20.5;
float f=20.4;
int result;
result= i==f;
printf("%d\n",result);
result=i==(int)f;
printf("%d\n",result);
result= (float)i==f;
printf("%d\n",result);
result=i<f;
printf("%d\n",result);
result=i<(int)f;
printf("%d",result);
}
