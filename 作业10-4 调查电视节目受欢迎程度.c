#include <stdio.h>
int main()
  {int num, n, i, a[1000];
   scanf("%d",&num);
   for(i=1; i<=num; i++) {
       scanf("%d",&n);
       if(n>=0 && n<=8) {
           a[n]++;
       }
   }
   for(i=1; i<=8; i++) {
       printf("%4d%4d\n",i,a[i]);
   }
   return 0;
  }
