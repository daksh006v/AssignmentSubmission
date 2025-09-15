#include <stdio.h>

int main()
{
   int n, i, j, k;
   printf("Enter your Number:");
   scanf("%d",&n);
   int num =1;

    for(i=n; i>0; i--){
        for(j=1; j<=n-i+1; j++){
            printf("%d\t",num);
            num++;
        }
       
       printf("\n");
   }
    return 0;
}