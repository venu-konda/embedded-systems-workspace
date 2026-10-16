#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
//#define MAX  10
int cnt=0;
const int MAX=10;
void find(char (*p)[20]);
void sort(char (*p)[20]);
void accending(char (*p)[20]);
void decending(char (*p)[20]);
void bigfirst( char (*p)[20]);
void smallfirst(char (*p)[20]);
void Delete    (char (*p)[20]);
void DeleteWithIndex(char (*p)[20]);
void DeleteWithName(char (*p)[20]);
void swaping(char *,char *);
void MenuDelete(void)
{
    printf("MENU for type of delete\n");
    printf("1.deleting with index\n");
    printf("2.deleting with name\n");
    printf("---------\n");
    printf("enter the type of delete:");
}
void printMenu(void)
{
	printf("\nMENU\n");
	printf("--------\n");
	printf("i:input\np:print\nq:quit\n");
	printf("f:find\ns:sort\nd:delete\n");
	printf("---------\n");
	printf("ENter your choice:");
}
void printSortMenu(void)
{
    printf("MENU for sort\n");
    printf("---------\n");
    printf("1.first letter in accending\n");
    printf("2.first letter in decending\n");
    printf("3.based on size small first\n");
    printf("4.based on size big first\n");
    printf("---------\n");
    printf("enter your choice of sorting:");
}
void input(char (*ptr)[20])
{//whenever called, add a new name to the existing records.
	if(cnt == MAX){printf("not enough memory\n"); return;}	
	printf("Enter name:");
__fpurge(stdin);
	gets(ptr[cnt]);
	cnt++;
}
void print(char (*ptr)[20])
{
	int i;
	for(i=0;i<cnt;i++)
		printf("name-%d:%s\n",i,ptr[i]);
}

int main()
{
	char names[10][20];
	char choice;
	while(1)
	{
		printMenu();
		__fpurge(stdin);
		scanf("%c",&choice);
		switch(choice)
		{
			case 'i':input(names); break;
			case 'd':Delete(names);break;
			case 'q':return 0;
			case 'p':print(names);break;
			case 's':sort(names);break;
			case 'f':find(names);break;
			default: printf("Error:invalid entry\n");
		}//switch
	}
}
void find(char (*p)[20])
{
    char s[100], **ptr;
    // ptr=&p;
    int i;
    printf("enter the character you want to find:");
    __fpurge(stdin);
    gets(s);
    for(i=0;i<cnt;i++)
    {
    if(strstr(p[i],s))
    {
        printf("index=%d    name=%s\n",i,p[i]);
    }
    }
}
void Delete( char (*p)[20])
{
    MenuDelete();
    int del;
    __fpurge(stdin);
    scanf("%d",&del);
    switch(del)
    {
        case 1:DeleteWithIndex(p);break;
        case 2:DeleteWithName(p);break;
        default:printf("entered invalid input\n");
    }
}
void DeleteWithIndex(char (*p)[20])
{
    print(p);
    printf("enter the element you want to delete:");
    __fpurge(stdin);
    int i,flag=0;
    char temp[100];
    scanf("%d",&i);
    for(i;i<cnt;i++)
    {
        strcpy(p[i],p[i+2]);
        flag=1;
    }
    if(flag)
    {
        cnt--;
    }
}
void DeleteWithName(char (*p)[20])
{
    int i,j;
       char s[100];
       __fpurge(stdin);
       printf("enter the name you want to delete:");
       gets(s);
       for(i=0;i<cnt;i++)
       {
           if(strstr(p[i],s))
           {
               for(j=i;j<cnt;j++)
               strcpy(p[j],p[j+1]);
               i--;cnt--;
           }
       }
}
void sort(char (*p)[20])
{
    printSortMenu();
    __fpurge(stdin);
    int choose;
    scanf("%d",&choose);
    switch(choose)
    {
        case 1:accending(p);break;
        case 2:decending(p);break;
        case 3:smallfirst(p);break;
        case 4:bigfirst(p);break;
        default:printf("error");
    }
}
void accending(char (*p)[20])
{
    int i,j,k=0;
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            k=0;
            while(p[i][k])
            {
                if(p[j][k]==p[i][k])
                k++;
                else if(p[j][k]<p[i][k])
                        {
                            swaping(p[j],p[i]);
                            // strcpy(temp, p[j]);
                            // strcpy(p[j], p[i]);
                            // strcpy(p[i], temp);
                            break;
                        }
                  else if(p[j][k]>p[i][k]) 
                  break;
            }
        }
    }
}
void decending(char (*p)[20])
{
    int i,j,k;
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            k=0;
            while(p[i][k])
            {
                if(p[j][k]==p[i][k])
                    k++;
                else if(p[j][k]>p[i][k])
                    {
                        swaping(p[j],p[i]);
                        break;
                    }
                    else if(p[j][k]<p[i][k])
                    break;
            }
        }
    }
}
void smallfirst( char (*p)[20])
{
    int i,j;
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if((strlen(p[j]))<(strlen(p[i])))
            {
                swaping(p[j],p[i]);
            }
        }
    }
}
void bigfirst( char (*p)[20])
{
    int i,j;
    for(i=0;i<cnt-1;i++)
    {
        for(j=i+1;j<cnt;j++)
        {
            if((strlen(p[j]))>(strlen(p[i])))
            {
                swaping(p[j],p[i]);
            }
        }
    }
}
void swaping(char *j,char *i)
{
    char temp[100];
    strcpy(temp,j);
    strcpy(j,i);
    strcpy(i,temp);
}

