#include<stdio.h>
int set_pair(int data,int i,int count)
{
	if(i-1!=-1)
	if((((data>>i)&1))&&((data>>(i-1))&1))
	{
		count++;
		i--;
	}
	i--;
	if(i<0)
		return count;
	return set_pair(data,i,count);
	
}
int main()
{
	int data;
	scanf("%d",&data);
	for(int i=31;i>-1;i--)
	{
		printf("%d",(data>>i)&1);
		if(i%8==0)
			printf(" ");
	}


	printf("\n");
	printf("\n%d\n",set_pair(data,31,0));
}
