#include <stdio.h>
#include<string.h>
int i;
int main ()
{
	char s[30];
	gets (s);
	int l = strlen (s);
	for (i = 0; s[i]; i++)
	{
		if (s[0] == ' ')
			memmove (s, s + 1, l);
		if (s[l - 1] == ' ')
			s[l - 1] = '\0';
		if ((s[i] == ' ') && (s[i - 1] == ' '))
		{
			memmove (s + i, s + i + 1, l - i);
			i--;
		}
	}
	printf ("%s", s);

	return 0;
}
