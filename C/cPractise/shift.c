#include<stdio.h>
#include<math.h>
int main()
{
	int data,pos,i;
	scanf("%d %d",&data,&pos);
	for(i=31;i>=0;i--)
	{
		printf("%d",((data>>i)&1));
		if(i%8==0)
			printf(" ");
	}
	printf("\n");
	printf("left=%d \n",data<<pos);
	printf("right=%d \n",data>>pos);
	printf("left without=%f\n",(data*(pow(2,pos))));
	if(data<0)
	{
		if(data%2)
			data=(data/(pow(2,pos)))-1;
		else
			data=(data/(pow(2,pos)));
	}
	else
		data=(data/(pow(2,pos)));

	printf("right without=%d\n",(data));


}
