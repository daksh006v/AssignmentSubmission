#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter your Number: ");
    scanf("%d", &n);
    int num= n*(n+1)/2;
    for (i = 1; i<=n; i++) {
        for (j = 1; j<=i;j++) {
            printf("%d\t",num);
           num--;
        }
        printf("\n");
    }

    return 0;
}