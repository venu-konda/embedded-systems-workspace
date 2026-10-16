#include<stdio.h>
#include<stdlib.h>

// Function declarations
void f2();  // Declare f2 before using it in f1 and venu

 f1()
{
    printf("in f1...\n");
    f2();
    printf("in f1...\n");
   venu();
    exit(0);
}

 f2()
{
    printf("in f2...\n");
  //  exit(0);
 //venu();
}

 venu()
{
    printf("main fn...\n");
   // f2();
   // printf("main fn...\n");
    exit(0);
}

