/*
����Բ���ĸߺͰ뾶����Բ�������Volume=��* r * r * h�� 
Ҫ����͵��ú���cylinder (r, h )����Բ����������

�����ʽ:
������һ���и���2��ʵ�����ֱ�Ϊ�뾶r�͸�h��

�����ʽ:
��һ�����ԡ�Volume = ֵ������ʽ���Բ�������������������λС����
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

