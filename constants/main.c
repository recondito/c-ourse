#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    
    const int number = 5;
    printf("%d\n", number);
    number = 8;
    printf("%d\n", number);

    // Will not compile as constants cannot be modified.

    return 0;
}