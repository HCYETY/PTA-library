#include<stdio.h>
int main()
  {double x, cost;
   scanf("%lf",&x);
   if(x<=50&&x>0) {
   	printf("cost = %.2lf",cost = x * 0.53);
   }
   else if(x>50) {
   	printf("cost = %.2lf",cost = 50 * 0.53 + (x - 50) * 0.58);
   }
   else if(x<0) {
   	printf("Invalid Value!");
   }
  }
