#include<stdio.h>
#include<string.h>
#include<ctype.h>
int top=-1,j;
char PE[100],stack[100];
void push(char a)
{
	stack[++top]=a;
}
char pop(void)
{
	if(top==-1)
		return 0;
	return stack[top--];
}
char peek(void)
{
	if(top==-1)
		return 0;
	return stack[top];
}
int main()
{
	//enum priority{+=0,'-'=0,'*'=1,'/'=1};
	char expr[100];
	char x;
	int i,flag=1;
	printf("enter the expression::");
	scanf("%s",expr);
	for(i=0;expr[i];i++,flag=1)
	{
		if(expr[i]=='(')
		{
			push(expr[i]);
		}
		else if(expr[i]=='+'||expr[i]=='-'||expr[i]=='*'||expr[i]=='/')
		{
			if((peek()=='*')&&(expr[i]=='+'))
			{
				while(((x=pop())!=0))
					if(x!='(')
					{
						PE[j++]=x;
					}
				if(x=='(')
					push(x);

			}
			else if((peek()=='*')&&(expr[i]=='-'))
			{
				while(((x=pop())!=0))
					if(x!='(')
						PE[j++]=x;
				if(x=='(')
					push(x);

			}
			else if((peek()=='/')&&(expr[i]=='+'))
			{
				while(((x=pop())!=0))
					if(x!='(')
						PE[j++]=x;
				if(x=='(')
					push(x);
			}
			else if((peek()=='/')&&(expr[i]=='-'))
			{
				while(((x=pop())!=0))
					if(x!='(')
						PE[j++]=x;
				if(x=='(')
					push(x);
			}
			else if(((peek()=='/')&&(expr[i]=='*'))||((peek()=='*')&&(expr[i]=='/')))
			{
				PE[j++]=pop();
				push(expr[i]);
				flag=0;
			}
			if(flag)
			push(expr[i]);
		}
		else if(isalpha(expr[i]))
		{
			PE[j++]=expr[i];
		}
		else if(expr[i]==')')
		{
			x=pop();
			while((x)!='(')
			{
				PE[j++]=x;
				x=pop();
			}
		}
	}
	if(expr[i]=='\0')
	{
		while(top!=-1)
			PE[j++]=pop();
	}
	//if((top==-1)&&expr[i]==0)
	printf("....%s\n",PE);

}
