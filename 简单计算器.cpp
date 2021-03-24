本题要求你为初学数据结构的小伙伴设计一款简单的利用堆栈执行的计算器。如上图所示，计算器由两个堆栈组成，一个堆栈 S1存放数字，另一个堆栈S2存放运算符。计算器的最下方有一个等号键，每次按下这个键，计算器就执行以下操作：
从S1中弹出两个数字，顺序为n1和n2；
从S2中弹出一个运算符 op；
执行计算 n2 op n1；
将得到的结果压回 S1。
直到两个堆栈都为空时，计算结束，最后的结果将显示在屏幕上。

输入格式：
输入首先在第一行给出正整数 N（1<N≤10的3次方），为 S1中数字的个数。
第二行给出 N 个绝对值不超过 100 的整数；第三行给出 N-1 个运算符，这里仅考虑 +、-、*、/ 这四种运算。一行中的数字和符号都以空格分隔。

输出格式：
将输入的数字和运算符按给定顺序分别压入堆栈S1和S2，将执行计算的最后结果输出。注意所有的计算都只取结果的整数部分。题目保证计算的中间和最后结果的绝对值都不超过10的9次方。
如果执行除法时出现分母为零的非法操作，则在一行中输出：ERROR: X/0，其中 X 是当时的分子。然后结束程序。

输入样例 1：
5
40 5 8 3 2
/ * - +
输出样例 1：
2

输入样例 2：
5
2 5 8 4 4
* / - +
输出样例 2：
ERROR: 5/0

#include <iostream>
#include <stack>
using namespace std;

stack<int> s1; // s1存放数字
stack<char> s2; // s2存放运算符
#define s1_maxsize N;

int main()
{
    int N, num[1000], res=0; // N为s1中数字的个数, num为操作数, res为运算结果
    char op; // op为运算符
    int i;
    cin>>N;
    for(i=1; i<=N; i++) {
        cin>>num[i];
        s1.push(num[i]);
    }
    for(i=1; i<N; i++) {
        cin>>op;
        s2.push(op);
    }
    while(!s1.empty() && !s2.empty()) {
        for(i=1; i<N; i++) {
            int right = s1.top(); // 计算数字堆栈栈顶两个数字用运算符栈顶的运算符计算，结果压入数字栈
            s1.pop();
            int left = s1.top();
            s1.pop();
            int op = s2.top();
            s2.pop();
            if(op == '+') {
                res = left + right;
            }
            else if(op == '-') {
                res = left - right;
            }
            else if(op == '*') {
                res = left * right;
            }
            else if(op == '/') {
                if(right!=0) {
                    res = left / right;
                } else {
                    cout<<"ERROR:"<<" "<<left<<"/0";
                    exit(0);
                }
            }
            s1.push(res);
        }
        s1.pop();
    }
    if(s1.empty() && s2.empty()) {
        cout<<res;
    }
}
