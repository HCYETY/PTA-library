#include <stdio.h>

double timesNum(int endNum) {
	double sum = 1;
	for(int i=1;i<=endNum;i++) {
		sum = sum * i;
 	}	
 	return sum;
}

int main()
  {int n;
   double total=0;
   printf("please input the number:");
   scanf("%d",&n);
   for(int i=1;i<=n;i++) {
   	total = total + timesNum(i);
   }
   printf("total:%lf",total);
   return 0;
  } 
