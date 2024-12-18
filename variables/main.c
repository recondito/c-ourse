#include <stdio.h>
#include <stdlib.h>

int main () {
    const char characterName[] = "George";
    const int characterAge = 69;

    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old. \n", characterAge);
    printf("He really liked the name %s\n", characterName);
    printf("but he did not line being %d.\n", characterAge);
    return 0;
}