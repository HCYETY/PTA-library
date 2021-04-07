#include <stdio.h>
int main()
  {int a[10] = {1,2,4,6,8,9,12,15,149,156};
   int num, i, j, t;
   scanf("%d",&num);
   for(i=1; i<10; i++) {
       for(j=0; j<9; j++) {
           if(num>a[j+1]) {
               a[j+1] = num;
           }
       }
   }
   for(i=0; i<11; i++) {
       printf("%.5d",&a[i]);
   }
  }
