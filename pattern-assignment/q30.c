#include <stdio.h>

int main()
{
  int n;
  scanf("%d",&n);
  
  for(int i=1;i<=n;i++){
      for(int j=i;j<=n;j++){
          printf(" ");
      }
    for(int k=65;k<=i+64;k++){
        printf("%c",k);
    }
    printf("\n");
  }
  
  for(int i=n-1;i>=1;i--){
      for(int j=n;j>=i;j--){
          printf(" ");
      }
    for(int k=65;k<=i+64;k++){
        printf("%c",k);
    }
    printf("\n");
  }
    return 0;
}