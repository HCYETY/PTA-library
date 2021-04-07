/*
  假设学生的基本信息包括学号、姓名、三门课程成绩以及个人平均成绩，定义一个能够表示学生信息的结构类型。输入n（n<50）个学生的成绩信息，按照学生的个人平均分从高到低输出他们的信息。如果平均分相同，按输入的先后顺序排列。

输入格式:
输入一个正整数n(n<50)，下面n行输入n个学生的信息，包括：学号、姓名、三门课程成绩（整数）。

输出格式:
输出从高到低排序后的学生信息，包括：学号、姓名、平均分（保留两位小数）。

输入样例:
3
101 Zhang 78 87 85
102 Wang 91 88 90
103 Li 75 90 84
输出样例:
102,Wang,89.67
101,Zhang,83.33
103,Li,83.00
*/

#include <stdio.h>
struct student
{
 char no[4];
 char name[10];
};
struct student stu[51];
int main()
{
 int n, c[51];
 float b[51];
 int a[160][4];
 scanf("%d", &n);
 for (int i=0;i<n;i++){
  scanf("%s %s %d %d %d", &stu[i].no, &stu[i].name, &a[i][0], &a[i][1], &a[i][2]);
  b[i]=(float)(a[i][0]+a[i][1]+a[i][2])/(float)3;
  c[i]=i;
 }
 float k;
 int s;
 for (int i=0;i<n;i++){
  for (int j=i+1;j<n;j++){
   if (b[i]<b[j]){
    k=b[i];
    b[i]=b[j];
    b[j]=k;
    s=c[i];
    c[i]=c[j];
    c[j]=s;
   }
  }
  printf("%s,%s,%.2f\n", stu[c[i]].no, stu[c[i]].name, b[i]);
 }
 return 0;
}
