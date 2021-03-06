设某银行有A、B两个业务窗口，且处理业务的速度不一样，其中A窗口处理速度是B窗口的2倍 —— 即当A窗口每处理完2个顾客时，B窗口处理完1个顾客。给定到达银行的顾客序列，请按业务完成的顺序输出顾客序列。假定不考虑顾客先后到达的时间间隔，并且当不同窗口同时处理完2个顾客时，A窗口顾客优先输出。

输入格式:
输入为一行正整数，其中第1个数字N(≤1000)为顾客总数，后面跟着N位顾客的编号。编号为奇数的顾客需要到A窗口办理业务，为偶数的顾客则去B窗口。数字间以空格分隔。
输出格式:
按业务处理完成的顺序输出顾客的编号。数字间以空格分隔，但最后一个编号后不能有多余的空格。

输入样例:
8 2 1 3 9 4 11 13 15
输出样例:
1 3 2 9 11 4 13 15

#include <iostream>
#include <queue>
using namespace std;

queue<int> s1; // A窗口存放奇数
queue<int> s2; // B窗口存放偶数

int main()
{
    int N, add, i; // N为顾客总数，add为顾客编号
    scanf("%d", &N);
    for(i=1; i<=N; i++) {
        scanf("%d ", &add);
        if(add%2!=0) { // 表示奇数
            s1.push(add); // 则存放在s1
        } else {
            s2.push(add);
        }
    }
    int flag=0; // 用于在输出空格时做标记
    while(!s1.empty()) {
        int num=2;
        while(num-- && !s1.empty()) {
            if(flag==1) {
                cout<<" ";
            }
            cout<<s1.front();
            flag=1;
            s1.pop();
        }
        if(!s2.empty()){
            cout<<" "<<s2.front();
            s2.pop();
        }
    }
    while(!s2.empty()){
        if(flag==1) {
            cout<<" ";
        }
        cout<<s2.front();
        flag=1;
        s2.pop();
    }
}
