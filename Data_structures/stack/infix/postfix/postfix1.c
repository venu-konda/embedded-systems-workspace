#include"myheader.h"
int top=-1,j;
char PE[100],stack[100];
int main()
{
	char expr[100];
	char x;
	int i,flag=1;
	printf("enter the expression::");
	scanf("%s",expr);
	if(!(balanced(expr)))
	{
		printf("it is not a balanced equation\n");
		return 0;
	}
	for(i=0;expr[i];i++,flag=1)
	{
		if(expr[i]=='(')
			push(expr[i]);
		else if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/')
		{
			if((peek()=='*')&&(expr[i]=='+'))
				poppush();
			else if((peek()=='*')&&(expr[i]=='-'))
				poppush();
			else if((peek()=='/')&&(expr[i]=='+'))
				poppush();
			else if((peek()=='/')&&(expr[i]=='-'))
				poppush();
			else if(((peek()=='/')&&(expr[i]=='*'))||((peek()=='*')&&(expr[i]=='/')))
			{
				PE[j++]=pop();
				PE[j++]=' ';
				push(expr[i]);
				flag=0;
			}
			else if(((peek()=='+')&&(expr[i]=='-'))||((peek()=='-')&&(expr[i]=='+')))
			{
				PE[j++]=pop();
				PE[j++]=' ';
				push(expr[i]);
				flag=0;
			}
			if(flag)
				push(expr[i]);
		}
		else if(isalpha(expr[i]))
		{
			PE[j++]=expr[i];
			PE[j++]=' ';
		}
		else if(expr[i]==')')
		{
			x=pop();
			while(((x)!='(')&&((x)!=0))
			{
				PE[j++]=x;
				PE[j++]=' ';
				x=pop();
			}
		}

	}
	if(expr[i]=='\0')
	{
		while(top!=-1)
		{
			PE[j++]=pop();
			PE[j++]=' ';
		}
	}
	printf("\n %s\n",PE);

}

