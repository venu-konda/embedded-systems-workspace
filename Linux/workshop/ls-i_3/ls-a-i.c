#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<sys/stat.h>
#include<dirent.h>
int main(int argc,char *argv[])
{
	DIR *dir;
	struct dirent *rd;
	struct stat buff;
	dir=opendir(argv[1]);
	while(rd=readdir(dir))
	{
		stat(rd->d_name,&buff);//geting file status
		printf("%lu %s %lu ",buff.st_ino,rd->d_name,rd->d_ino);
//		printf("%s ",rd->d_name);
		printf("%s\n",ctime(&buff.st_atime));//converting epoce time
	}

}
