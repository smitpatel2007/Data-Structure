#include <stdio.h>

int main() {
    int arr[] = {15, 22, 9, 40, 30};
    int i, min, max, sum = 0;
    float average;

    min = max = arr[0];

    for(i = 0; i < 5; i++) {
        if(arr[i] < min)
            min = arr[i];
        if(arr[i] > max)
            max = arr[i];

        sum += arr[i];
    }

    average = sum / 5.0;

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}

