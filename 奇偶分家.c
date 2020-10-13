/*给定N个正整数，请统计奇数和偶数各有多少个？*/

#include <stdio.h>
int main()
  {int N, i, odd, even;
   0<N<=1000;
   odd=0;even=0;
   scanf("%d\n",&N);
   for(i=1;i<=N;i++) {
   printf("%d",i);
   }
   if(i/2==0) {
   odd=odd+1; 
   }
   else(i/2==1) {
   even=even+1; 
   }
   } 
