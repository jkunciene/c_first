#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 38;
    char name[] = "Jolita";

    printf("Hello, my name is %s !\n", name);
    printf("I'm %d years old!\n", age);

    age = 5;

    printf("Hello, my name is %s !\n", name);
    printf("I'm %d years old!\n", age);

    return 0;
}
