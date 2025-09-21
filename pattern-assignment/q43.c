#include <stdio.h>

int main()
{
    int row;
    scanf("%d",&row);
    int column;
    scanf("%d",&column);
    
    for(int i=1;i<=row;i++){
        for(int j=1;j<=column;j++){
            if(i==1 || i==row || j==1 || j==column){
                printf("%d",j);
            }
            else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}