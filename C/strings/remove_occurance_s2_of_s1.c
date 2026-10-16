#include<string.h>
#include <stdio.h>

int main()
{
	char s1[30],s2[30],*p,*temp,*found;
	int l1,l2;
	gets(s1);
	gets(s2);
	l2=strlen(s2);

	//////remove first occurance///////////////////////////
	// p=strstr(s1,s2);
	// if(p)
	// memmove(p,p+l2,strlen(p+l2)+1);
	// printf("%s",s1);

	////remove last occurance/////////////////////////////
	// temp=s1;
	// while(temp=strstr(temp,s2))
	// {
	//     found=temp;
	//     temp+=l2;
	// }
	// if(found)
	// memmove(found,found+l2,strlen(found+l2)+1);
	// printf("%s",s1);

	/////remove all occurance in a string//////////////////////

	temp=s1;
	while(temp=strstr(temp,s2))
	{
		memmove(temp,temp+l2,strlen(temp+l2)+1);
	}
	printf("%s",s1);
}



