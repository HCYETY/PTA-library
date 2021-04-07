/*
����Ҫ��ʵ��һ�������������й�ʽ��cos(x)�Ľ���ֵ����ȷ�����һ��ľ���ֵС��e��

cos(x)=x��0�η�/0!-x��2�η�/2!+x��4�η�/4!-x��6�η�/6!+...
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
 
	double tmp1=1, numerator=1, denominator=1, sum=1;//numerator���ӣ�denominator��ĸ 
	int i, k = -1;
 
	for(i=2;tmp1>e;i+=2){
		numerator = numerator * x * x;
		denominator = denominator * i * (i-1); //���ĸ�Ľײ� 
		sum = sum + k * numerator / denominator;
		tmp1 = numerator / denominator;
		k=-k;
	}
 
	return sum;
 
}

