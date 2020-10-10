/*
本题目要求计算下列分段函数f(x)的值：
y=f(x)={1/x  x!=0}
            {0  x=0}
*/

#include<stdio.h>
#include<math.h>
int main()
{
	float a,x;
	scanf("%f", &x);
	if (x == 0)
	{
		printf("f(0.0) = 0.0\n");
	}
	else if (x<0)
	{
		x = fabs(x);
		a = (float)1.0 / x;
		printf("f(%.1f) = %.1f\n", -x,-a);
	}
	else if (x > 0)
	{
		a = (float)1.0 / x;
		printf("f(%.1f) = %.1f\n", x, a);
	}
	return 0;
}