#include"myheader.h"
extern int top,j;
extern char PE[100],stack[100];
int balanced(char *expr)
{
        int i;
        for(i=0;expr[i];i++)
        {
                if(expr[i]=='('||expr[i]=='{'||expr[i]=='[')
                        push(expr[i]);
                else if(expr[i]==')')
                {
                        if(pop()!='(')
                                break;
                }
                else if(expr[i]=='}')
                {
                        if(pop()!='{')
                                break;
                }
                else if(expr[i]==']')
                {
                        if(pop()!='[')
                                break;
                }
        }
        if(expr[i]==0&&top==-1)
               return 1;
        else
                return 0;
}
