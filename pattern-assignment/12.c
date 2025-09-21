#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            printf(" ");
        }
    for(int k=65;k<=i+64;k++){
        printf("%c",k);
    }
    printf("\n");
    }

    return 0;
}


// using two for loops

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
    
    
//     for(int i=1;i<=n;i++){
//         int count=65;
//         for(int j=1;j<=n;j++){
//             if(i+j>n){
//                 printf("%c",count);
//                 count++;
//             }
//             else{
//                 printf(" ");
//             }
//         }
//     printf("\n");
//         }
    

//     return 0;
// }