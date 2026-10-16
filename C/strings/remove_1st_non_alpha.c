#include <string.h>
#include <stdio.h>

int Alphabet(int);
int i;

int main() {
	char s[30];
	gets(s);

	int l = strlen(s);

	for (i = 0; i <=l; i++) {
		if (Alphabet(s[i])) {
			memmove(s + i, s + i + 1, l - i);
			break;
		}
	}

	printf("%s", s);
	return 0;
}

int Alphabet(int p) {
	if (!((p >= 'a') && (p <= 'z')) || ((p >= 'A') && (p <= 'Z')))
		return 1;
	return 0;
}
