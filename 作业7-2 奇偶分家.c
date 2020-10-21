/*给定N个正整数，请统计奇数和偶数各有多少个？*/

#include <stdio.h>
int main()
  {int N, n, i, odd, even;
   N>0 && N<=1000;
   odd = 0; even = 0;
   scanf("%d\n",&N);
   for(i=1;i<=N;i++) {
   scanf("%d",&n);
   if(n%2!=0) {
   odd = odd + 1;
   }
   if(n%2==0||n==0) {
   even = even + 1;
   }
   }
   printf("%d %d",odd,even);
   } 
