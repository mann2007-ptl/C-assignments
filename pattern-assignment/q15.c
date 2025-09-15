#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
    for(int k=65;k<=2*i-1+64;k++){
        printf("%c",k);
      }
    printf("\n");
    }
    

    return 0;
}