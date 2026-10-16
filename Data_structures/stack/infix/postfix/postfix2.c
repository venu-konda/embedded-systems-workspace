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
/*	if(!(balanced(expr)))
	{
		printf("it is not a balanced equation\n");
		return 0;
	}*/
	for(i=0;expr[i];i++,flag=1)
	{
		if(expr[i]==' ')
		{
		if(expr[i-1]=='(')
			push(expr[i-1]);
		else if(expr[i-1]=='+'||expr[i-1]=='-'||expr[i-1]=='*'||expr[i-1]=='/')
		{
			if((peek()=='*')&&(expr[i-1]=='+'))
				poppush();
			else if((peek()=='*')&&(expr[i-1]=='-'))
				poppush();
			else if((peek()=='/')&&(expr[i-1]=='+'))
				poppush();
			else if((peek()=='/')&&(expr[i-1]=='-'))
				poppush();
			else if(((peek()=='/')&&(expr[i-1]=='*'))||((peek()=='*')&&(expr[i-1]=='/')))
			{
				PE[j++]=pop();
				PE[j++]=' ';
				push(expr[i-1]);
				flag=0;
			}
			else if(((peek()=='+')&&(expr[i-1]=='-'))||((peek()=='-')&&(expr[i-1]=='+')))
			{
				PE[j++]=pop();
				PE[j++]=' ';
				push(expr[i-1]);
				flag=0;
			}
			if(flag)
				push(expr[i]);
		}
		else if(isalpha(expr[i-1]))
		{
			PE[j++]=expr[i-1];
			PE[j++]=' ';
		}
		else if(expr[i-1]==')')
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

