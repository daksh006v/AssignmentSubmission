#include <stdio.h>

int main()
{   int n;
    printf("Enter your Number:");
    scanf("%d",&n);
    
    for (int i=1; i<=n; i++){
        printf("%d\t",i);
    }

    return 0;
}