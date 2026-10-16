#include<stdio.h>
#define MAX 100
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
int main()
{
	char expr[100];
	int i;
	printf("enter the expression\n");
	scanf("%s",expr);
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
		printf("%s is a balanced equation",expr);
	else
		printf("%s is a not a balanced equation",expr);
}
