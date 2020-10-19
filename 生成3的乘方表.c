#include <stdio.h>
int main()
  {int n, i;
   double power;
   scanf("%d",&n);
   for(i=0;i<=n;i++) {
    power = pow(3,i);
	printf("pow(3,%d) = %.3f\n", i, power);
   }
  } 
