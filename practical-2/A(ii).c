#include <stdio.h>

int main() {
    int arr[3][3];
    int i, j, k, found = 0;

    printf("Enter 9 elements for 3x3 matrix:\n");
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            printf("Element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Ask user to enter the element to search
    printf("Enter the element to search: ");
    scanf("%d", &k);

    // Search for the element
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(arr[i][j] == k) {
                printf("Element %d found at position [%d][%d]\n", k, i, j);
                found = 1;
            }
        }
    }

    // If not found
    if(!found) {
        printf("Element %d not found in the array.\n", k);
    }

    return 0;
}

