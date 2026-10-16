#include<stdio.h>
//#include<stdio-exe.h>
int main()
{
	char c;
	do
	{
		printf("Enter a char(# to stop)=");
	       scanf("%c",&c);
	       printf("c=%c\n",c);


	}while(c!='#');
}
