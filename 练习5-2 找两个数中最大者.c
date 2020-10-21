#include <stdio.h>
int max( int a, int b );
int main()
  {int a, b, max;
   scanf("%d %d", &a, &b);
   if(a<b)max=b;
   else {
        max=a;	
    }
   printf("max = %d\n", max);
}
