#include "myheader.h"
extern int top,j;
extern char PE[100],stack[100];
void push(char a)
{
        stack[++top]=a;
}
