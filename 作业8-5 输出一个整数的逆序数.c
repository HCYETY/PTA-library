#include <stdio.h>
int main()
  {int N,n;
   n = 0;
   scanf("%d",&N);
   while(N!=0){
   n = n * 10 + N % 10;
   N = N / 10;
   }
   printf("%d",n);
  }
