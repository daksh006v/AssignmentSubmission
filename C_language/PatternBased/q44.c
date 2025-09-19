#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter your Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
            if ((n % 2 != 0 && (i == (n + 1) / 2 || j == (n + 1) / 2)) ||
                (n % 2 == 0 && (i == n / 2 || j == n / 2))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}