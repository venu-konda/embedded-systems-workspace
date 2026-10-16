#include "myheader.h"
void findMedian(STUDENT *fast)
{
	STUDENT *slow=fast;
	int flag=0;
	if(fast->link==NULL)
		printf("%s\n",fast->name);
	else
	{
		while(fast->link)
		{
			if(fast->link->link==NULL)
			{
				printf("%4d %15s %10f\n",slow->id,slow->name,slow->marks);
				printf("%4d %15s %10f\n",slow->link->id,slow->link->name,slow->link->marks);
				fast=fast->link;
			}
			else
			{
				fast=fast->link->link;
				slow=slow->link;
				if(fast->link==NULL)	
					printf("%4d %15s %10f\n",slow->id,slow->name,slow->marks);

			}
		}
		/*	if(flag)
			printf("%s\n",slow->name);*/
	}
}
