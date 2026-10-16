#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
int main()
{
	printf("Hi\n");
	fork();
	fork();
	fork();
	fork();
	fork();
	fork();
	printf("Hello World\n");
}
