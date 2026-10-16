#include "stdio.h"
#include "stdlib.h"
int main()
{
	FILE *fp;
	char ch;
	fp=fopen("data","r");
	printf("size=%ld\n",sizeof(FILE));
	if(fp==NULL)
	{
		printf("file not found");
		exit(0);
	}
	printf("file opened succesfully\n");
	ch=fgetc(fp);
	printf("%c\n",ch);
	ch=fgetc(fp);  
//	ch=*(fp->_IO_read_ptr);
	printf("%c\n",ch);
	ch=fgetc(fp);
	printf("%c\n",ch);
	ch=fgetc(fp);
	printf("%c\n",ch);
	ch=fgetc(fp);
	printf("%c\n",ch);
	ch=fgetc(fp);
	printf("%c\n",ch);
//	putchar(ch);
}
