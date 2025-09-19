#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter your Number: ");
    scanf("%d", &n);
    int num=1;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
        if(i == j){
            printf("%d",j);
        }
        else if(i+j == n+1){
            printf("%d",j);
        }
        else{ printf(" ");}
            
          

    }
        printf("\n");
    }

    return 0;
}