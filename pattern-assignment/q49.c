#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    char count= 'A';
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%c",count);
            count++;
        }
    printf("\n");
    }
    return 0;
}