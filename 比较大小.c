#include<stdio.h>
int main()
  {int x, y, z, t;
   scanf("%d %d %d",&x,&y,&z);
   if(x>=y) {
   t=y;y=x;x=t;
   }	
   if(y>=z) {
   t=z;z=y;y=t;
   }
   if(x>=z) {
   t=z;z=x;x=t;
   }
   printf("%d->%d->%d",x,y,z);
   return 0;
} 
