#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter your Number: ");
    scanf("%d", &n);
    int num=1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
       printf("%d\t", i*j);
        }
        printf("\n");
    }

    return 0;
}