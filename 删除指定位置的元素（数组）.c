/*
在一个数组中存入1~10的整数。输入一个位置k，把数组中第k个元素删除，输出原数组和结果数组。

输入格式:
k

位置k从0算起。

输出格式:
如果位置k不合理，超出有效值，输出error.

其它情况先输出原数组，再输出结果数组。

输入样例1:
4
输出样例1:
1 2 3 4 5 6 7 8 9 10
1 2 3 4 6 7 8 9 10
输入样例2:
10
输出样例2:
error.
*/

#include<stdio.h>
int main()
{
    int add[10] = {1,2,3,4,5,6,7,8,9,10}； // 原数组
	 int sign[9]; // 删除后的数组
    int k, i;
    scanf("%d",&k);
    if(k<0 || k>9) {
        printf("error.");
    } else {
        for(i=0; i<k; i++) {
            sign[i] = add[i]; // 复制原数组
        }
        for(i=k; i<9; i++) {
            sign[i] = add[i+1]; // 删除数字，即将后面的数字赋值给前一位
        }
        for(i=0; i<10; i++) {
            printf("%d ", add[i]); // 输出原数组
        }
        printf("\n");
        for(i=0; i<9; i++) {
            printf("%d ", sign[i]); // 输出删除后的数组
        }
        printf("\n");
    }
}
