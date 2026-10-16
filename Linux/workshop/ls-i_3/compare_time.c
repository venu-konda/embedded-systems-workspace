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
	struct stat buff1;
	stat(argv[1],&buff1);
//	printf("%s\n",ctime(&buff1.st_atime));
	struct stat buff2;
	stat(argv[2],&buff2);
//	printf("%s\n",ctime(&buff2.st_atime));
	if(buff1.st_atime>buff2.st_atime)
		printf("%s\n is new",argv[1]);
	else
		printf("%s\n is new",argv[2]);
}
