#include<stdio.h>
#include<unistd.h>
#include<stdlib.h> 
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <time.h>

int main(int argc,char **argv)
{
	DIR *p=opendir(argv[1]);
	struct dirent *v;
	struct stat buff;
	while(v=readdir(p))
	{
		stat(v->d_name,&buff);
		printf("%ld ",buff.st_ino);
		printf("%s ",v->d_name);
		printf("%ld\n",(buff.st_atime));
	}
}
