#include <stdio.h>
#include <string.h>

int main() {
    char str[50];
    int i, j, length, mid, flag = 1;

    printf("Enter the string (format wCwR): ");
    scanf("%s", str);

    length = strlen(str);

    // Find C position
    for(i = 0; i < length; i++) {
        if(str[i] == 'C') {
            mid = i;
            break;
        }
    }

    // Compare left and right parts
    for(i = 0, j = length - 1; i < mid; i++, j--) {
        if(str[i] != str[j]) {
            flag = 0;
            break;
        }
    }

    if(flag == 1)
        printf("Valid String\n");
    else
        printf("Invalid String\n");

    return 0;
}
