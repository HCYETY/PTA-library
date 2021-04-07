#include <stdio.h>
int main()
  {int n, grade, i, max;
   n > 0;max = 0;
   scanf("%d",&n);
   for(i=1;i<=n;i++) {
   	scanf("%d",&grade);
   	if(max<=grade) {
   		max = grade;
	   }
   }
   printf("%d",max);
  } 
