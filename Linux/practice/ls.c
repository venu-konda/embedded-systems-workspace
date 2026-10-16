#include<stdio.h>
#include<unistd.h>
#include<stdlib.h> 
#include <sys/types.h>
       #include <dirent.h>
int main(int argc,char **argv)
{
	DIR *p=opendir(argv[1]);
	struct dirent *v;
	
	while(v=readdir(p))
		printf("%s\n",v->d_name);
}
