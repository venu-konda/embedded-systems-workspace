#include<stdio.h>
#include<string.h>
int main()
{
    char s1[20],s2[20];
    printf("enter string 1:");
    scanf("%s",s1);
    printf("enter string 2:");
    scanf("%s",s2);
    int n,l2,l3,i,l11,l1;
    printf("enter the nth  position:");
    scanf("%d",&n);

    l1=strlen(s1);
    l11=l1;
    for(i=n,l11;i!=l1;i++,l11++)
    {
        s1[l11]=s1[i];
    }
    s1[l11]='\0';
  
	l2=strlen(s1);
   strcpy(s1+n,s2);

 
    l3=strlen(s1);
    for(l3,l1;l1!=l2;l3++,l1++)
    s1[l3]=s1[l1];
    s1[l3]='\0';
    printf("%s\n",s1);
    
}

