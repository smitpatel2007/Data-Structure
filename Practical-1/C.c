
#include <stdio.h>

int main() {
    int num = 25;
    int *ptr;

    ptr = &num;

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", ptr);

    return 0;
}
