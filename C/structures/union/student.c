#include "define.h"
int count;
void input(struct student *p);
void print(struct student *p);
int main()
{
	char a;
	struct student S[MAX];
	while(1)
	{
		__fpurge(stdin);
		printf("\n----------------\na=input\np=print\nq=quit\n---------\n");
		printf("enter the choice ::");
		scanf("%c",&a);
		switch(a)
		{
			case 'a':input(S);break;
			case 'p':print(S);break;
			case 'q':return 0;
		}
	}
}
void input(struct student *p)
{
	unsigned short int x,y,z;
	printf("enter the student id::");
	scanf("%s",p[count].id);
	printf("enter the student name::");
	__fpurge(stdin);
	scanf("%[^\n]s",p[count].name);
	printf("enter the student marks::");
	scanf("%f",&p[count].marks);
	printf("enter the student day::");
	scanf("%hu",&x);
	p[count].dob.day=x;
	printf("enter the student month::");
	scanf("%hu",&y);
	p[count].dob.month=y;
	printf("enter the student year::");
	scanf("%hu",&p[count].dob.year);
	printf("enter the choice of proof::");
	__fpurge(stdin);
	scanf("%d",&p[count].choice);
	switch(p[count].choice)
	{
		case 1:{printf("enter the student aadhar::");
				scanf(" %s",p[count].idproof.aadhar);break;}
		case 2:{printf("enter the student pan::");
			       scanf(" %s",p[count].idproof.pan);break;}
		case 3:{printf("enter the student voter::");
			       scanf(" %s",p[count].idproof.voter);break;}
		case 4:{printf("enter the student passport::");
			       scanf(" %s",p[count].idproof.passport);break;}
		default:printf("error");break;
	}
	count++;
}
void print(struct student *p)
{
	int i;
	printf("%5s %15s %15s %15s %12s %12s %15s\n","s.No","student id","student name","marks","DOB","id type","id No.");
	for(i=0;i<count;i++,printf("\n"))
	{
		  printf("%5d %15s %15s %15f   %d-%d-%d ",i+1,p[i].id,p[i].name,p[i].marks,p[i].dob.day,p[i].dob.month,p[i].dob.year);

        switch(p[i].choice)
        {
		case 1:printf("%15s %15s","aadhar",p[i].idproof.aadhar);break;
                case 2:printf("%15s %15s","pan",p[i].idproof.pan);break;
                case 3:printf("%15s %15s","voter",p[i].idproof.voter);break;
                case 4:printf("%15s %15s","passport",p[i].idproof.passport);break;
                default:printf("error");break;
        }
	}
}
