#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    
    for(int i=0;i<=n;i++){
        for(int j=i;j<=n;j++){
            printf(" ");
        }
    for(int k=1;k<=2*i-1;k++){
        printf("%d",k);
      }
    printf("\n");
    }
    

    return 0;
}


//second method (using only two for loops)

// #include <stdio.h>

// int main()
// {
//     int n;
//     scanf("%d",&n);
   
    
//     for(int i=1;i<=n;i++){
//         int count=1;
//         for(int j=1;j<=n+i-1;j++){
//             if(j<=n-i){
//                 printf(" ");
//             }
//             else{
//                 printf("%d",count);
//                 count++;
//             }
//         }
//     printf("\n");
//     }

//     return 0;
// }
