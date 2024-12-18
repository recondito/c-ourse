#include <stdio.h>
#include <stdlib.h>

int main () {
    printf("%f\n", 5.0 + 4.5); // Same type
    printf("%f\n", 5 + 4.5); // Gets converted to floating point number
    printf("%d\n", 5 + 4); //  Returns an integer
    printf("%d\n", 5 / 4); // Gets converted to integer even if the result is not exact.

    return 0;
}