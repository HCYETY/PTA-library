/*
����N��ְԱ����Ϣ�������������������ʡ��������ʺ�֧����Ҫ���д����˳�����ÿλְԱ��������ʵ�����ʣ�ʵ������=��������+��������-֧������

�����ʽ��
������һ���и���������N�����N�У�ÿ�и���һλְԱ����Ϣ����ʽΪ������ �������� �������� ֧�������м��Կո�ָ������С�������Ϊ����С��10�Ĳ������հ��ַ��ķǿ��ַ������������롢�����֤�ڵ����ȷ�Χ�ڡ�

�����ʽ��
��������˳��ÿ�����һλְԱ��������ʵ�����ʣ����һ���ո񣬹��ʱ���2λС����

����������
3
zhao 240 400 75
qian 360 120 50
zhou 560 150 80
���������
zhao 565.00
qian 430.00
zhou 630.00
*/

#include <stdio.h>
struct people{
    char name[10]; //ְԱ����
    float basicWages; //��������
    float floatingWages; //��������
    float payMent; //֧��
    float actualWage; //ʵ������
};
int main()
  {int N, i;
   struct people members[1000];
   scanf("%d", &N);
   for(i=0; i<N; i++) {
       scanf("%s %f %f %f", members[i].name, &members[i].basicWages, &members[i].floatingWages, &members[i].payMent);
       members[i].actualWage = (members[i].basicWages+members[i].floatingWages)-members[i].payMent;
   }
   for(i=0; i<N; i++) {
       printf("%s %.2f\n", members[i].name, members[i].actualWage);
   }
  }
