#include<stdio.h>
#include<stdlib.h>

// Function declarations
//void f2();  // Declare f2 before using it in f1 and venu

void f1()
{
    printf("in f1...\n");
    f2();
    printf("in f1...\n");
    venu();
    exit(0);
}

void f2()
{
    printf("in f2...\n");
   // exit(0);
 //  venu();
}

void venu()
{
    printf("main fn...\n");
   // f2();
   // printf("main fn...\n");
 //  exit(0);
}
