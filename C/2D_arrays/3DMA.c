#include<stdio.h>
#include<stdio_ext.h>
#include<string.h>
#include<stdlib.h>
//#define MAX  10
int cnt=0;
const int MAX=10;
char accending(char ***);
void find(char ***);
char sort(char ***);
char decending(char ***);
char bigfirst( char ***);
char smallfirst(char ***);
char Delete (char ***);
char DeleteWithIndex(char ***);
char DeleteWithName(char ***);
void swaping(char *,char *);
void MenuDelete(void)
{
    printf("MENU for type of delete\n");
    printf("--------------------------------\n");
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
  char *Getline()
{
        __fpurge(stdin);
        char *p=NULL;
        int i=0;
        do
        {
                p=realloc(p,i+1);
                p[i]=getchar();
        }while((p[i++])!='\n');
        p[i-1]=0;
        // *ptr=p;
        return p;
}
char input(char (***ptr))
{//whenever called, add a new name to the existing records.
        //      if(cnt == MAX){printf("not enough memory\n"); return;}
        ptr;
        ptr=realloc(ptr,(cnt+1)*sizeof(ptr));
        printf("Enter name:");
        // __fpurge(stdin);
        ptr[cnt]=Getline();
        cnt++;
        //return ptr;


}
void print(char (***ptr))
{
        int i;
        for(i=0;i<cnt;i++)
                printf("name-%d:%s\n",i,ptr[i]);
}
int main()
{
        char **names=NULL;
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
void find(char (***p))
{
        char *s;
        // ptr=&p;
        int i;
        printf("enter the character you want to find:");
        __fpurge(stdin);
        s=Getline();
        for(i=0;i<cnt;i++)
        {
                if(strstr(p[i],s))
                {
                        printf("index=%d    name=%s\n",i,p[i]);
                }
        }
}
char Delete( char (***p))
{
        MenuDelete();
        int del;
        __fpurge(stdin);
        scanf("%d",&del);
        switch(del)
        {
                case 1:p=DeleteWithIndex(p);break;
                case 2:p=DeleteWithName(p);break;
                default:printf("entered invalid input\n");
        }
        //return p;
}
char DeleteWithIndex(char ***p)
{
        printf("-----------------\n");
        print(p);
        printf("-----------------\n");
        printf("enter the element you want to delete:");
        __fpurge(stdin);
        int i,flag=0;
        scanf("%d",&i);
        if(i<cnt)
        {
        free(p[i]);
        memmove(p+i,p+i+1,(cnt-i-1)*8);
        cnt--;
        }
       // return p;
}
char DeleteWithName(char ***p)
{
        int i,j;
        char *s;
        __fpurge(stdin);
        printf("enter the name you want to delete:");
        s=Getline();
        for(i=0;i<cnt;i++)
        {
                if(strstr(p[i],s))
                {
                    free(p[i]);
                    memmove(p+i,p+i+1,8);
                        // for(j=i;j<cnt;j++)
                        //         strcpy(p[j],p[j+1]);
                        cnt--;
                }
        }
        //return p;
}
char sort(char ***p)
{
        printSortMenu();
        __fpurge(stdin);
        int choose;
        scanf("%d",&choose);
        switch(choose)
        {
                case 1:p=accending(p);break;
                case 2:p=decending(p);break;
                case 3:p=smallfirst(p);break;
                case 4:p=bigfirst(p);break;
                default:printf("error");
        }
        //return p;
}
char accending(char ***p)
{
        int i,j,k=0;
        for(i=0;i<cnt-1;i++)
        {
                for(j=i+1;j<cnt;j++)
                {
                        if(strcmp(p[j],p[i])<0)
                                swaping(p[j],p[i]);
                }
        }
        //return p;
}
char decending(char ***p)
{
        int i,j,k;
        for(i=0;i<cnt-1;i++)
        {
                for(j=i+1;j<cnt;j++)
                {
                        if(strcmp(p[j],p[i])>0)
                                swaping(p[j],p[i]);

                }
        }
        //return p;
}
char smallfirst( char ***p)
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
        //return p;
}
char bigfirst(char ***p)
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
        //return p;
}
void swaping(char *j,char *i)
{
    char temp[100];
    strcpy(temp,j);
    strcpy(j,i);
    strcpy(i,temp);
}
