#include<sys/types.h>
#include<dirent.h>
#include<fcntl.h>
#include<time.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	DIR *d;
	d=opendir(argv[1]);
	struct dirent *p;
	struct stat buff;
	while(p=readdir(d))
	{
		stat(p->d_name,&buff);
		printf("%lu,",buff.st_ino);
		printf("%lu,",buff.st_mode);
		printf("%u,",buff.st_gid);
		printf("%s,",ctime(&buff.st_mtime));
		printf("%s\n",p->d_name);
	}
}
