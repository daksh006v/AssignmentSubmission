#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter your Number: ");
    scanf("%d", &n);
    int num=1;
    int min1, min2, min3, min4;
    int min;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= n; j++) {
          
        min1 = j-1;
        min2 = i-1;
        min3 = n-j;
        min4 = n-i;
        min = min1;

    if (min2 < min) {min = min2;}
    if (min3 < min) {min = min3;}
    if (min4 < min) {min = min4;}
        
        printf("%d",min+1);
       
       
        }
        printf("\n");
    }

    return 0;
}