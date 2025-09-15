#include <stdio.h>

int main()
{   int n,i,j;
    printf("Enter your Number:");
    scanf("%d",&n);
    
    for(i= n; i>0; i--){
        for(j=65;j<=n-i+65; j++){
            printf("%c",j);
        }
        printf("\n");
    }
    
       return 0;}