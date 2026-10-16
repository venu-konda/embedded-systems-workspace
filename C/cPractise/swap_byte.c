#include<stdio.h>
int main()
{
        int data,i,pos1,pos2;
        scanf("%d%d%d",&data,&pos1,&pos2);
        for(i=31;i>=0;i--)
        {
                printf("%d",((data>>i)&1));
                if(i%8==0)
                        printf(" ");
        }
	data=(((data&~((255<<(pos1*8))|(255<<(pos2*8))))|
				(((data>>(pos1*8)&255))<<(pos2*8))|
				(((data>>(pos2*8)&255))<<(pos1*8))));

        printf("\ndata=%x\n",data);
        for(i=31;i>=0;i--)
        {
                printf("%d",((data>>i)&1));
                if(i%8==0)
                        printf(" ");
        }
}

