#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<fcntl.h>
#include<time.h>
#include<sys/stat.h>
#include<dirent.h>
#include<string.h>
int main(int argc,char *argv[])
{
	char str[300];
	DIR *dir;
	struct dirent *rd;
	struct stat buff;
	dir=opendir(argv[1]);
	while(rd=readdir(dir))
	{
		bzero(str,300);
		strcpy(str,argv[1]);
		strcat(str,rd->d_name);
		printf("sssss=%s\n",str);
		stat(str,&buff);//geting file status
		printf("%lu %s ",buff.st_ino,rd->d_name);
		printf("%s\n",ctime(&buff.st_atime));//converting epoce time
	}

}
