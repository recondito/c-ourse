#include <stdio.h>
#include <stdlib.h>

int main () {
    int age;  
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("You are %d years old.\n", age);
    getchar();

    char name[20];  
    printf("Enter your name: ");
    fgets(name, 20, stdin); // No '&' needed as the name of an array is the same as &name[0]
    printf("Your name is %s", name);

    return 0;
} 