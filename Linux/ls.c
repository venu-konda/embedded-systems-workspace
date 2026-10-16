#include<stdio.h>
#include<stdlib.h>
#include<unistd.h> 
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
int main(int argc,char **argv)
{
	DIR *dir;
	dir=opendir(argv[1]);
	struct dirent *p;
	while(p=readdir(dir))
	{
		printf("%d  ",p->d_ino);
		printf("%s  \n",p->d_name);
	}
	close(dir);
}
