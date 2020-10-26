#include <stdio.h>
int main(void)
  {int N, count, sum, yu;
   count = 0; 
   sum = 0;
   scanf("%d",&N);
   while(N!=0) {
   	yu = N % 10;
   	N = N / 10;
   	sum = sum + yu;
   	count++;
   }
   printf("%d %d",count,sum);
  } 
