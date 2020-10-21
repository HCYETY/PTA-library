#include<stdio.h>
int main()
  {int i, N;
   double sum;
   scanf("%d", &N);
   sum=0;
   i=1;
   for(i=1; i<=2*N; i+=2) {  /*ÓÐÕùÒé*/ 
		sum=sum+1.0/i;
	}
   printf("sum = %.6lf",sum);
   } 
