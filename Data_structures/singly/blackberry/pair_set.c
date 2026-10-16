#include<stdio.h>
int set_pair(int data,int i,int count)
{
	if(((data>>i)&1)&&(data>>(i-1))&1)
	{
		count++;
		i--;
	}
	i--;
	if(i==-1)
		return count;
	return set_pair(data,i,count);
	
}
int main()
{
	int data;
	scanf("%d",&data);
	printf("%d\n",set_pair(data,31,0));
}
