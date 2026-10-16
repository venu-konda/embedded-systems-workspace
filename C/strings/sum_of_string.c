#include <stdio.h>
#include<stdlib.h>
int i, j;
int checkString (char *);
int myAtoi(char *);   //ascii to integer function
int sum (int, int);
int main ()
{
	int n = 19;
	char str1[n], str2[n];
INPUT:
	printf ("enter the string 1=");
	scanf ("%s", str1);
	if (checkString (str1) == 0)
	{
		printf ("\nyou have entered wrong format of string 1\n");
		goto INPUT;
	}
INPUT1:
	printf ("enter the string 2=");
	scanf ("%s", str2);
	if (checkString (str2) == 0)
	{
		printf ("\nyou have entered wrong format of string 2\n");
		goto INPUT1;
	}
	int n1, n2;
//	n1 = atoi (str1);//ascii to integer
//	n2 = atoi (str2);

	n1 = myAtoi (str1);
	n2 = myAtoi (str2);
	printf ("\nsum of two strings::%d\n", sum (n1, n2));
}

int checkString (char *p)
{
	i=0;
	if(*p=='-') i++;
	for (i ; p[i]; i++)
	{
		if (((p[i] >= 48) && (p[i] <= 57)))
			continue;
		else if (p[i] == 0)
			break;
		else
			return 0;
	}
	return 1;
}

/*
   int checkString (char *p)
:   {
   if(*p=='-') p++;
   for (p ; p[i]; p++)
   {
   if (!((p[i] >= 48) && (p[i] <= 57)))
   return 0;
   }
   return 1;
   }*/
int sum (int a, int b)
{
	int sum;
	sum = a + b;
	return sum;
}


int myAtoi(char *p)
{
	int rev=0,a=0;
	if(*p=='-')
	{
		p++;
		a=1;
	}
	for(p;*p;p++)
	{
		rev=rev*10+(*p-48);
	}
	if(a==1)
		return -rev;
	else
		return rev;

}
