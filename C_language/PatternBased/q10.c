#include <stdio.h>

int main()
{
   int n, i, j, k;
   printf("Enter your Number:");
   scanf("%d",&n);

   for(i=n; i>0; i--){
       for (j=1; j<i  ;j++){
           printf(" ");
       }
      for(k=1; k<=n-i+1; k++){
          printf("*");
      }
       printf("\n");
   }

    return 0;
}