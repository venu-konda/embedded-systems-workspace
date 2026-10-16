#include "myheader.h"
void redBlue(STUDENT *head)
{
	int rcnt=0,bcnt=0,i;
	STUDENT *red=NULL,*blue=NULL,*temp=NULL,*r=NULL,*b=NULL,*prev=NULL;
	for(;head;head=head->link,prev->link=NULL)
	{
		if(head->id==1)
		{
		//	red=calloc(1,size(STUDENT));
			if(red==NULL)
			{	
				red=head;
				//red->link=NULL;
			}
			else
			{
				temp=red;
				for(;temp->link;temp=temp->link);
				temp->link=head;
			//	red=temp;
				//	red->link->link=NULL;
			}
			rcnt++;
		}
		else
		{
			if(blue==NULL)
			{
				blue=head;
				//blue->link=NULL;
			}
			else
			{
				temp=blue;
				for(;temp->link;temp=temp->link);
				temp->link=head;
				//	blue->link->link=NULL;
			}

			bcnt++;
		}
prev=head;
	}
/*	b=blue;
	for(i=1;i<bcnt;i++)
		blue=blue->link;
	blue->link=NULL;			
	blue=b;
	r=red;
	for(i=1;i<rcnt;i++)
		red=red->link;
	red->link=NULL;
	red=r;

	//	blue->link=NULL;
	//	red->link=NULL;
*/
	printf("blue node\n");
	print(blue);
	printf("\nred node\n");
	print(red);
}
