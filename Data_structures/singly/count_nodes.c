#include "myheader.h"
int countNodes(STUDENT *head)
{
	int cnt=0;
	for(head;head;head=head->link)
		cnt++;
	return cnt;
}
