#include <stdio.h>

int main()
{   int n, i, j, k;
   printf("Enter your Number:");
   scanf("%d",&n);
   
   for(i = n; i>=1; i--){
       for(j=1; j<=n-i; j++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
           printf("%c",j+64); 
        }
        
        
        printf("\n");
   }
  
    return 0;
}