#include <stdio.h>

int main()
{
   int n, i, j, k;
   printf("Enter your Number:");
   scanf("%d",&n);
    int num=0;
    for(i=1 ; i<=n; i++){
        for(j=1; j<=n; j++){
            if(j>=i){
                num++;
                printf("%d",num);
            }
            else{ printf(" ");}
           
        }
        num=0;
       printf("\n");
   }
    return 0;
}