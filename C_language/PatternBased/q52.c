#include <stdio.h>

int main() {
    int n, i, j, count;
    printf("Enter your Number: ");
    scanf("%d", &n);
    for (i = 1; i<=n; i++) {
        for (j = 1; j<=n;j++) {
            if((i+j)%2){ printf("0");}
            else{ printf("1");}
        }
        printf("\n");
    }

    return 0;
}