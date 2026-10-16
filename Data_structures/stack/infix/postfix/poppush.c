#include"myheader.h"
extern int top,j;
extern char PE[100],stack[100];
void poppush(void)
{
	char x;
	while(((x=pop())!=0)&&((x!='(')))
	{
		PE[j++]=x;
		PE[j++]=' ';
	}
	if(x=='(')
		push(x);
}
