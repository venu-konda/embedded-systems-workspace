#include<stdio.h>
int main()
{
	int data,num,bit;
	scanf("%d",&data);
	for(bit=31;bit>=0;bit--)
	{
		if(bit%2==1)
		{
			if(bit<=9)
			{
			//	data=(data|(1<<bit));
				data=(data&(~(1<<bit)));
			}
		}
		printf("%d",((data>>bit)&1));
	}
	printf("\n%d",data);

}
