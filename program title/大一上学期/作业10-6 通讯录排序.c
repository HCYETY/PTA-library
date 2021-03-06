/*
输入n个朋友的信息，包括姓名、生日、电话号码，本题要求编写程序，按照年龄从大到小的顺序依次输出通讯录。题目保证所有人的生日均不相同。

输入格式:
输入第一行给出正整数n（<10）。随后n行，每行按照“姓名 生日 电话号码”的格式给出一位朋友的信息，其中“姓名”是长度不超过10的英文字母组成的字符串，“生日”是yyyymmdd格式的日期，“电话号码”是不超过17位的数字及+、-组成的字符串。

输出格式:
按照年龄从大到小输出朋友的信息，格式同输出。

输入样例:
3
zhang 19850403 13912345678
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
输出样例:
wang 19821020 +86-0571-88018448
qian 19840619 13609876543
zhang 19850403 13912345678
*/

#include <stdio.h>
struct friend{
    char name[10];
    int birthday;
    char phone[20];
}s[10],t;
int main()
  {int n, i, j;
   scanf("%d",&n);
   for(i=0; i<n; i++) {
       scanf("%s %d %s\n", s[i].name, &s[i].birthday, s[i].phone);
   }
   for(i=0; i<n-1; i++) {
        for(j=0; j<n-i-1; j++) {
            if(s[j].birthday>s[j+1].birthday) {
                t=s[j];
                s[j]=s[j+1];
                s[j+1]=t;
            }
        }
   }
   for(i=0; i<n; i++) {
        printf("%s %d %s\n", s[i].name, s[i].birthday, s[i].phone);
   }
   return 0;
  }
