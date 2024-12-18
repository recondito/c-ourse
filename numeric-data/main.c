#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    printf("%f\n", 5.0 + 4.5); // Same type
    printf("%f\n", 5 + 4.5); // Gets converted to floating point number
    printf("%d\n", 5 + 4); //  Returns an integer
    printf("%d\n", 5 / 4); // Gets converted to integer even if the result is not exact.
    printf("%f\n", pow(2, 3)); // 2 to the power of 3.

    return 0;
}