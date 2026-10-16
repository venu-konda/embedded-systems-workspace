#include "myheader.h"
extern int top,j;
extern char PE[100],stack[100];
char pop(void)
{
        if(top==-1)
                return 0;
        return stack[top--];
}
