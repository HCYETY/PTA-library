#include<stdio.h>
int main()
  {float x, y;
   scanf("%f",&x);
   if(x<0) {
   	y = 0;
   }
   else if(x>=0&&x<=15) {
   	y = (4 * x)/3;
   }
   else if(x>15) {
   	y = 25 * x - 10.5;
   }
   printf("f(%.2f) = %.2f",x,y);
   } 
