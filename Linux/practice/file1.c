#include<sys/types.h>
#include<dirent.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char **argv)
{
	DIR *d;
	d=opendir(argv[1]);
	struct dirent *p;
	while(p=readdir(d))
	{
		printf("%lu,",p->d_ino);
		printf("%lu,",p->d_off);
		printf("%u,",p->d_reclen);
		printf("%u,",p->d_type);
		printf("%s\n",p->d_name);
	}
}
