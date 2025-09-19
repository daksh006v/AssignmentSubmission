#include <stdio.h>

int main() {
    int n, i, j, count=1;
    printf("Enter your Number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1;j<=n;j++) {
            printf("%d",count);
            count++;
        }
        printf("\n");
    }

    return 0;
}