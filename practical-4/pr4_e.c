#include <stdio.h>
int n;
void TOH(int n, char source, char destination, char auxi) {
    if (n == 0) {
        return;
    }
    TOH(n - 1, source, auxi, destination);
    printf("Move disk %d from rod %c to rod %c\n", n, source, destination);
    TOH(n - 1, auxi, destination, source);
}

int main() {
    int n;
    printf("Enter the number of disks: ");
    scanf("%d", &n);

    TOH(n, 'A', 'C', 'B');
    return 0;
}
