#include <stdio.h>

int main()
{   int n,i,j;
    printf("Enter your Number:");
    scanf("%d",&n);
    
    for(i= n; i>0; i--){
        for(j=0;j<n-i+1; j++){
            printf("*");
        }
        printf("\n");
    }
    
       return 0;
}