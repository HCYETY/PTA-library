/*
给定N个职员的信息，包括姓名、基本工资、浮动工资和支出，要求编写程序顺序输出每位职员的姓名和实发工资（实发工资=基本工资+浮动工资-支出）。

输入格式：
输入在一行中给出正整数N。随后N行，每行给出一位职员的信息，格式为“姓名 基本工资 浮动工资 支出”，中间以空格分隔。其中“姓名”为长度小于10的不包含空白字符的非空字符串，其他输入、输出保证在单精度范围内。

输出格式：
按照输入顺序，每行输出一位职员的姓名和实发工资，间隔一个空格，工资保留2位小数。

输入样例：
3
zhao 240 400 75
qian 360 120 50
zhou 560 150 80
输出样例：
zhao 565.00
qian 430.00
zhou 630.00
*/

#include <stdio.h>
struct people{
    char name[10]; //职员名字
    float basicWages; //基本工资
    float floatingWages; //浮动工资
    float payMent; //支出
    float actualWage; //实发工资
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
