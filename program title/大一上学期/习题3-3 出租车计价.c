#include <stdio.h>
int main()
  {int time;
   float x, yuan1, yuan2, yuan;
   x = 0;
   time = 0;
   scanf("%f %d",&x,&time);
   if(x>0 && x<=3) {
   	yuan1 = 10;
   }
   else if(x>=3 && x<=10) {
   	yuan1 = 10 + (x-3) * 2;
   }
   else if(x>10) {
   	yuan1 = 10 + (10-3) * 2 + (x-10) * 3;
   }
   yuan2 = time / 5 * 2;
   yuan = yuan1 + yuan2;
   printf("%.0f",yuan);
  }
