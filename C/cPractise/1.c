
#include <stdio.h>

int main()
{
   char s[100]="abcdefgh";
   char *p=s;
  // printf("%ld %ld\n",p,&s);
   p="xyz";
   printf("%s\n%s\n",p,s);
}

