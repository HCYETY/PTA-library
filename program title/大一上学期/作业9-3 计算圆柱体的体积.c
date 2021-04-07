/*
输入圆柱的高和半径，求圆柱体积，Volume=π* r * r * h。 
要求定义和调用函数cylinder (r, h )计算圆柱体的体积。

输入格式:
输入在一行中给出2个实数，分别为半径r和高h。

输出格式:
在一行中以“Volume = 值”的形式输出圆柱体的体积，结果保留三位小数。
*/

#include <stdio.h>
double cylinder(double r,double h);
int main()
  {double r,h,Volume;
   scanf("%lf %lf",&r,&h);
   Volume=cylinder(r,h);
   printf("Volume = %.3lf",Volume);
  }
 
double cylinder(double r,double h)
{
	double result;
	result=3.1415926*r*r*h;
	return result;
}

