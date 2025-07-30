#include <stdio.h>

int main() {
    int a = 10, b = 20, sum;
    int *p1 = &a, *p2 = &b;

    sum = *p1 + *p2;

    printf("Sum of %d and %d is %d\n", a, b, sum);

    return 0;
}

