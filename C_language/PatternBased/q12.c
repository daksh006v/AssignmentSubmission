#include <stdio.h>


int main()
{   int n,i,j;
    printf("Enter your Number:");
    scanf("%d",&n);
   
    for (i = 1; i <= n; i++) {
        
        for (j = 1; j <= n - i; j++) {
            printf("  "); //    
        }
          
        for (int k = 0; k < i; k++) {
            printf("%c ", 'A' + k);
        }
        printf("\n");
    }
 
       return 0;}
