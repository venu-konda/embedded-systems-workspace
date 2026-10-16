#include<stdio.h>
#include<string.h>
#include<stdio_ext.h>
#include<stdlib.h>
int cnt=0,i,j,l=0,m,flag=1;
char **temp;
char *Getline(void);
char ***input(char ***);
void print(char ***);
void menu(void);
void Find(char ***);
void FindByName(char ***);
void FindByMail(char ***);
void FindByMobile(char ***);
void FindMenu(void);
char ***sort(char ***);
void SortMenu(void);
char ***SortByName(char ***);
char ***SortByMail(char ***);
char ***SortByMobile(char ***);
void DeleteMenu(void);
char ***Delete(char ***);
char ***DeleteByIndex(char ***);
char ***DeleteByName(char ***);
char ***DeleteByMail(char ***);
char ***DeleteByMobile(char ***);
int main()
{
	char ***a=NULL,choice;
	while(1)
	{
		__fpurge(stdin);
		menu();
		printf("enter the choice=");
		scanf("%c",&choice);
		printf("-----------------------\n");
		switch(choice)
		{
			case 'i':a=input(a);break;
			case 'q':return 0;
			case 'p':print(a);break;
			case 'd':a=Delete(a);break;
			case 's':a=sort(a);break;
			case 'f':Find(a);break;
		}
	}
}
void menu(void)
{
	printf("-----------------------\n");
	printf("---MENU----\n");
	printf("i=insert\n");
	printf("p=print\n");
	printf("q=quit\n");
	printf("s=sort\n");
	printf("d=delete\n");
	printf("f=find\n");
	printf("-----------------------\n");
}
char *Getline(void)
{
	__fpurge(stdin);
	char *p=NULL;
	i=0;
	do{
		p=realloc(p,i+1);
		p[i]=getchar();
	}while(p[i++]!='\n');
	p[i-1]=0;
	return p;
}
char ***input(char ***p)
{
	p=realloc(p,(cnt+1)*8);
	p[cnt]=calloc(3,8);
	printf("enter the name=");
	p[cnt][0]=Getline();
	printf("enter the mail id=");
	p[cnt][1]=Getline();
	printf("enter the mobile number=");
	p[cnt][2]=Getline();
	cnt++;
	return p;
}
void print(char ***p)
{
	char s[4][10]={"s.no","name","email","phone"};
	printf("%3s %10s %10s %10s\n",s[0],s[1],s[2],s[3]);
	for(i=0;i<cnt;i++,printf("\n"))
	{
		printf("%3d",i+1);
		for(j=0;j<3;j++)
		{
			printf(" %10s",p[i][j]);
		}
	}
}
void Find(char ***p)
{
	__fpurge(stdin);
	FindMenu();
	printf("enter your choice to find=");
	scanf("%d",&m);
	switch(m)
	{
		case 1:FindByName(p);break;
		case 2:FindByMail(p);break;
		case 3:FindByMobile(p);break;
	}

}
void FindMenu(void)
{
	printf("-----------------------\n");
	printf("---FIND MENU----\n");
	printf("1.find by name\n");
	printf("2.find by email id\n");
	printf("3.find by mobile number\n");
	printf("-----------------------\n");
}

void FindByName(char ***p)
{
	char *s=NULL;
	printf("enter the name do you want to find=");
	s=Getline();
	char a[4][10]={"s.no","name","email","phone"};
	printf("-----------------------\n");
	printf("%3s %10s %10s %10s\n",a[0],a[1],a[2],a[3]);
	m=1;
	for(i=0;i<cnt;i++)
	{	if(flag)
		{
			printf("%3d",m);
			m++;
		}
		flag=0;
		for(j=0;j<3;j++)
		{
			if(strstr(p[i][0],s))
			{
				printf(" %10s",p[i][j]);
				flag=1;
			}
		}
		if(flag)
		{
			printf("\n");

		}

	}
}
void FindByMail(char ***p)
{
	char *s=NULL;
	printf("enter the mail do you want to find=");
	s=Getline();
	char a[4][10]={"s.no","name","email","phone"};
	printf("-----------------------\n");
	printf("%3s %10s %10s %10s\n",a[0],a[1],a[2],a[3]);
	m=1;
	for(i=0;i<cnt;i++)
	{
		if(flag)
		{
			printf("%3d",m);
			m++;
		}
		flag=0;
		for(j=0;j<3;j++)
		{
			if(strstr(p[i][1],s))
			{
				printf(" %10s",p[i][j]);
				flag=1;
			}
		}
		if(flag)
			printf("\n");
	}
}
void FindByMobile(char ***p)
{
	char *s=NULL;
	printf("enter the mobile number do you want to find=");
	s=Getline();
	char a[4][10]={"s.no","name","email","phone"};
	printf("-----------------------\n");
	printf("%3s %10s %10s %10s\n",a[0],a[1],a[2],a[3]);
	m=1;
	for(i=0;i<cnt;i++)
	{
		if(flag)
		{
			printf("%3d",m);
			m++;
		}
		flag=0;
		for(j=0;j<3;j++)
		{
			if(strstr(p[i][2],s))
			{
				printf(" %10s",p[i][j]);
				flag=1;
			}
		}
		if(flag)
			printf("\n");

	}
}
char ***sort(char ***p)
{
	int a;
	SortMenu();
	__fpurge(stdin);
	printf("enter your choice=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:p=SortByName(p);break;
		case 2:p=SortByMail(p);break;
		case 3:p=SortByMobile(p);break;
	}
	return p;
}
void SortMenu(void)
{
        printf("-----------------------\n");
        printf("---SORT MENU----\n");
        printf("1.sort by name\n");
        printf("2.sort by email id\n");
        printf("3.mobile by mobile number\n");
        printf("-----------------------\n");
}
char ***SortByName(char ***p)
{
	for(i=0;i<cnt-1;i++)
	{
		for(j=0;j<cnt;j++)
		{
			if(strcmp(p[i][0],p[j][0])<0)
			{
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	return p;
}
char ***SortByMail(char ***p)
	{
        for(i=0;i<cnt-1;i++)
        {
                for(j=0;j<cnt;j++)
                {
                        if(strcmp(p[i][1],p[j][1])<0)
                        {
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                        }
                }
        }
	return p;
}

char ***SortByMobile(char ***p)
{
        for(i=0;i<cnt-1;i++)
        {
                for(j=0;j<cnt;j++)
                {
                        if(strcmp(p[i][2],p[j][2])<0)
                        {
                                temp=p[i];
                                p[i]=p[j];
                                p[j]=temp;
                        }
                }
        }
	return p;
}
void DeleteMenu(void)
{
        printf("-----------------------\n");
        printf("---DELETE MENU----\n");
	printf("1.delete  by index\n");
        printf("2.delete by name\n");
        printf("3.delete by email id\n");
        printf("4.delete by mobile number\n");
        printf("-----------------------\n");
}

char ***Delete(char ***p)
{
	DeleteMenu();
	int a;
	printf("enter the type of Delete=");
	scanf("%d",&a);
	switch(a)
	{
		case 1:p=DeleteByIndex(p);break;
		case 2:p=DeleteByName(p);break;
		case 3:p=DeleteByMail(p);break;
		case 4:p=DeleteByMobile(p);break;
	}
	return p;
}

char ***DeleteByIndex(char ***p)
{
	print(p);
	__fpurge(stdin);
	printf("enter the index to delete=");
	scanf("%d",&i);
	free(p[i][0]);
	free(p[i][1]);
	free(p[i][2]);
	free(p[i]);
	memmove(p+i,p+i+1,(cnt-i-1)*8);
	cnt--;
	return p;

}
char ***DeleteByName(char ***p)
{
	printf("enter the name to delete=");
        char *q=Getline();
	for(i=0;i<cnt;i++)
	{
	if(strstr(p[i][0],q))
			{
        free(p[i][0]);
        free(p[i][1]);
        free(p[i][2]);
        free(p[i]);
        memmove(p+i,p+i+1,(cnt-i-1)*8);
	cnt--;
	}
	}
        return p;
}
char ***DeleteByMail(char ***p)
	{
        printf("enter the mail to delete=");
        char *q=Getline();
        for(i=0;i<cnt;i++)
        {
        if(strstr(p[i][1],q))
                        {
        free(p[i][0]);
        free(p[i][1]);
        free(p[i][2]);
        free(p[i]);
        memmove(p+i,p+i+1,(cnt-i-1)*8);
	cnt--;
        }
        }
        return p;
}
char ***DeleteByMobile(char ***p)
{
        printf("enter the mobile to delete=");
        char *q=Getline();
        for(i=0;i<cnt;i++)
        {
        if(strstr(p[i][2],q))
                        {
        free(p[i][0]);
        free(p[i][1]);
        free(p[i][2]);
        free(p[i]);
        memmove(p+i,p+i+1,(cnt-i-1)*8);
	cnt--;
        }
        }
        return p;
}
