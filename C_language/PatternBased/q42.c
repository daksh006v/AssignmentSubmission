#include <stdio.h>

int main()
{   int row, col, i, j, k;
   printf("Enter your Row:");
   scanf("%d",&row);
   printf("Enter your collumn:");
   scanf("%d",&col);
   
   for(i = 1; i<=row; i++){
       for(j=1; j<=col; j++){
           
           if(i ==1){ printf("*");}
           
        else if(i==row){ printf("*");}
           
        else if(j == 1){ printf("*");}
        
        else if(j ==col){ printf("*");}
        
        else {printf(" ");}
        }
    
        printf("\n");
   }
  
    return 0;
}