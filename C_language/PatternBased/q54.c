#include <stdio.h>

int main() {
    int n, i, j, count=1;
    printf("Enter your Number: ");
    scanf("%d", &n);
    
     for(i = 1; i<=n; i++){
       for(j=1; j<=2*n-1; j++){
           
        if(i +j == n+1){ printf("*");}
           
        else if(j-i==n-1){ printf("*");}
        
        else {printf(" ");}
        }
    
        printf("\n");
   }
 
     for(i = 2; i<=n; i++){
       for(j=1; j<=2*n-1; j++){
           
        if(i==j){ printf("*");}
           
        else if(i + j == 2*n){ printf("*");}
        
        else {printf(" ");}
        }
    
        printf("\n");
   }

    return 0;
}