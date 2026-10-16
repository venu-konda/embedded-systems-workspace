#include <stdio.h>
#include <string.h>

struct VENU {
    char name[20];
    int age;
};

int main() {
    struct VENU v[4]; // Array of struct VENU to store multiple instances

    for (int i = 0; i < 4; i++) {
        printf("Enter name and age for person %d:\n", i + 1);
        scanf("%s", v[i].name);
        scanf("%d", &v[i].age);
    }

    printf("\nEntered information:\n");
    for (int i = 0; i < 4; i++) {
        printf("Person %d\n", i + 1);
        printf("Name: %s\n", v[i].name);
        printf("Age: %d\n", v[i].age);
    }

    return 0;
}

