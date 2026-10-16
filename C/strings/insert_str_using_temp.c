#include<stdio.h>
#include<string.h>
void myStrcpy(char *,char *);
int main()
{
    char s1[10],s2[10];
    printf("enter the string 1=");
    scanf("%s",s1);
    printf("enter the string 2=");
    scanf("%s",s2);
    int n,l;
    printf("enter the nth  position to add string=");
    scanf("%d",&n);
    char temp[10];
    //strcpy(temp,s1+n);
    myStrcpy(temp,s1+n);
   // strcpy(s1+n,s2);
    myStrcpy(s1+n,s2);
    l=strlen(s1);
  //  strcpy(s1+l,temp);
  myStrcpy(s1+l,temp);
    printf("\n%s",s1);
}

void myStrcpy(char *p2,char *p1)
{
    int i;
    for(i=0;p1[i];i++)
    p2[i]=p1[i];
    p2[i]='\0';
}
