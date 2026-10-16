#include<stdio.h>
#include<string.h>
int main()
{
	char a[3][3][10],choice;
	int i,j,k;
	for(i=0;i<3;i++)
	{
		printf("\nstudent %d\n",i+1); 
		for(j=0;j<3;j++)
		{
			if(j==0)
				printf("enter the name of student=");
			else if(j==1)
				printf("enter the mail id=");
			else if(j==2)
				printf("enter the mobile number=");
			scanf("%s",a[i][j]);
		}
	}
	char s[4][10]={"s.no","name","email","phone"};
	printf("%3s %10s %10s %10s\n",s[0],s[1],s[2],s[3]);
	for(i=0;i<3;i++,printf("\n"))
	{
		printf("%3d",i+1);
		for(j=0;j<3;j++)
		{
			printf(" %10s",a[i][j]);
		}
	}
}
