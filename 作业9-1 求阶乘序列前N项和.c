#include<stdio.h>
int main()
  {int sum = 0, i = 1, N, stratum=1;
   N>0 && N<=12;
   scanf("%d",&N);
   for(i=1;i<=N;i++) {
     stratum = stratum * i;
     sum = sum + stratum; 
   }
   printf("%d",sum);
  }
