#include<stdio.h>

// Function declarations
void f2();  // Declare f2 before using it in f1 and main

void f1()
{
    printf("in f1...\n");
    f2();
    printf("in f1...\n");
}

void f2()
{
    printf("in f2...\n");
}

int main()
{
    printf("main fn...\n");
    f1();
    printf("main fn...\n");
    f2();
    printf("main fn...\n");
    return 0;
}

