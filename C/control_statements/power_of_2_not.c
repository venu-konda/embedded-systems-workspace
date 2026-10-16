#include<stdio.h>
int main()
{
	int p=1,data;
	printf("enter any integer=");
	scanf("%d",&data);

	while(p<data)
	{
		p*=2;
	}
		if(p==data)printf("yes");
		else
		{
			printf("no");

		}


/*  // alternative
      	if((data&(data-1))==0)printf("yes");
		else
		{
			printf("no");
		}*/
}
