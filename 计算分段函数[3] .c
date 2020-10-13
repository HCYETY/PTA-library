#include<stdio.h>
int main()
  {float x, y;
   scanf("%f",&x);
   if(x!=10) {
   y = x;
   }
   else {
   y = 1/x;
   }
   printf("f(%.1f) = %.1f\n",x,y);
   } 
