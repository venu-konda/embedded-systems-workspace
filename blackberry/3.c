#include<stdio.h>
union 
{
	char a;
	int b;
}v;
void print(int data)
{
	for(int i=7;i>=0;i--)
	{
		printf("%d ",((data>>i)&1));
	}
}
int main()
{
/*	v.b=1;
	int x=1;
	char *y=&x;
	if(*y==1)
		printf("littel\n");
	if(v.a==1)
	{
		printf("littel\n");
	}
	int a,b;
	scanf("%d",&a);
	printf("%d\n",a>>1);*/
	float f=-12.4;
	char *ch=&f;
	for(int i=3;i>=0;i--)
	{
		print(*(ch+i));
	}
}
