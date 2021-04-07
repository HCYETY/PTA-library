/*
本题要求实现一个函数，用下列公式求cos(x)的近似值，精确到最后一项的绝对值小于e：

cos(x)=x的0次方/0!-x的2次方/2!+x的4次方/4!-x的6次方/6!+...
*/ 

#include <stdio.h>
#include <math.h> 

double funcos( double e, double x );

int main()
  {double e, x;
 
   scanf("%lf %lf", &e, &x);
   printf("cos(%.2f) = %.6f\n", x, funcos(e, x));
 
   return 0;
}
 
double funcos( double e, double x ){
 
	double tmp1=1, numerator=1, denominator=1, sum=1;//numerator分子；denominator分母 
	int i, k = -1;
 
	for(i=2;tmp1>e;i+=2){
		numerator = numerator * x * x;
		denominator = denominator * i * (i-1); //求分母的阶层 
		sum = sum + k * numerator / denominator;
		tmp1 = numerator / denominator;
		k=-k;
	}
 
	return sum;
 
}

