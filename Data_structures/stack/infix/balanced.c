#include<stdio.h>
char stack[MAX];
int top=-1;
void push(char a)
{
        if(top==MAX-1)
                printf("stack is full\n");
        else
                stack[++top]=a;
}
char pop(void)
{
        if(top==-1)
                return -1;
        return stack[top--];
}
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
