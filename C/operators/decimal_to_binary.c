#include<stdio.h>
int main()
{
	int data,bit,count=0;
	printf("enter any integer data=");
	scanf("%d",&data);
	bit=sizeof(int)*8-1;
/*TESTBIT:
	printf("%d",(data&(1<<bit)));
//	  count++;
//	  if(count==8)
//	{
//		printf("  ");
//		count=0;
//	}
	if(bit%8==0)printf(" ");
	--bit;

	if(bit>=0)
	{
		goto TESTBIT;
		printf("\n");
		return 0;
	}*/

TEST:
	 printf("%d",(data>>bit)&1);
	 if(bit%8==0)printf(" ");
        --bit;

        if(bit>=0)
        {
                goto TEST;
                printf("\n");
                return 0;
        }
}


	
