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
	data=(((data&~((15<<(pos1*4))|(15<<(pos2*4))))|
				(((data>>(pos1*4))&15)<<(pos2*4))|
				(((data>>(pos2*4))&15)<<(pos1*4))));
        printf("\ndata=%d\n",data);
        for(i=31;i>=0;i--)
        {
                printf("%d",((data>>i)&1));
                if(i%8==0)
                        printf(" ");
        }
}

