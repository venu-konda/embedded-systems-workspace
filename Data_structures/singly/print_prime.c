#include "myheader.h"
int prime(int d)
{
	if(d<2)
		return 0;
	int i;
	for(i=2;i*i<=d;i++)
		if(d%i==0)
			return 0;
	return 1;
}
void primePrint(STUDENT *head)
{
	  if(head==NULL)
                printf("list is empty");
        for(head;head;head=head->link)
		if(prime(head->id))
                printf("%4d %15s %10f\n",head->id,head->name,head->marks);
}
