#include <stdio.h>

int main()
{
   int n;
   scanf("%d",&n);
   
   for(int i=65;i<n+65;i++){
       printf("%c",i);
   }

    return 0;
}