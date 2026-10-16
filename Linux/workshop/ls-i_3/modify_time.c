#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<sys/stat.h>
#include<dirent.h>
#include<utime.h>
int main(int argc,char *argv[])
{
	struct stat buff;
	stat(argv[1],&buff);
	struct utimbuf t;
	t.actime=t.modtime=buff.st_mtime+(3600*24*31);
	utime(argv[1],&t);
	printf("%s\n",ctime(&buff.st_atime));
}
