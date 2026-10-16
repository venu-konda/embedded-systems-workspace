#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void replace(char *,char *,char *);
char *getstring(void)
{
        char *s=NULL;
        int i=0;
        do
        {
                s=realloc(s,i+1);
                s[i]=getchar();

        }while(s[i++]!='\n');
        s[--i]='\0';
        return s;
}
int main()
{
        char *str,sub[100],new[100];
//      str=getstring();
unsigned long int n=0;
        getline(&str,&n,stdin);
        str[strlen(str)-1]='\0';
        fgets(sub,sizeof(sub),stdin);
        sub[strlen(sub)-1]='\0';
        fgets(new,sizeof(new),stdin);
        new[strlen(new)-1]='\0';
        replace(str,sub,new);
        printf("%s",str);
}
void replace(char *p,char *sub,char *new)
{
        char *q=p;
        int l1,l2,l3;
        l1=strlen(sub);
        l2=strlen(new);
        l3=strlen(p);
//      printf("%d %d %d\n",l1,l2,l3);
        while(q=strstr(q,sub))
        {
                int i=p-q;
                if(l2>l1)
                {
        //              p=realloc(p,strlen(p)+1+l2-l1);
                        memmove(q+l2,q+l1,strlen(q+l1)+1);
                }
                else if(l2<l1)
                {
                        memmove(q+l2,q+l1,strlen(q+l1)+1);
        //              p=realloc(p,strlen(p)+1);
                }
                strncpy(q,new,l2);
                q=q+l2;
        }
        //printf("%s",str);
}


