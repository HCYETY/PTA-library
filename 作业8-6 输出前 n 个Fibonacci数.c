#include<stdio.h>
int main(void)
  {int i, N, count, x1, x2, x;
   N>=1 && N<=46;
   i = 1, x1 = 1, x = 0;
   scanf("%d",&N);
   if(N<1) {
     printf("Invalid.");
   }
   while(i<=N) { 
   	x2 = x1;
   	x1 = x + x2;
   	x = x2;
   	printf("%11d",x);
   	count++;
   	if(count%5==0) {
     		printf("\n");
   	}
   	i++;
  }
 }
