#include <stdio.h>
#include <stdlib.h>

int main () {
    double x;
    double y;
    printf("Enter first number: ");
    scanf("%lf", &x);
    printf("Enter second number: ");
    scanf("%lf", &y);

    printf("Answer: %f\n", x + y);

    return 0;
} 