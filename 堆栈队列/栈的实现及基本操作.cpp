/*
给定一个初始为空的栈和一系列压栈、弹栈操作，请编写程序输出每次弹栈的元素。栈的元素值均为整数。

输入格式:
输入第1行为1个正整数n，表示操作个数；接下来n行，每行表示一个操作，格式为1 d或0。1 d表示将整数d压栈，0表示弹栈。n不超过20000。
输出格式:
按顺序输出每次弹栈的元素，每个元素一行。若某弹栈操作不合法（如在栈空时弹栈），则对该操作输出invalid。

输入样例:
7
1 1
1 2
0
0
0
1 3
0
输出样例:
2
1
invalid
3
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack_int;
    int n; // n为操作个数
    cin>>n;

    for(int i=0; i<n; i++) {
        int op;
        cin>>op;
        if(op==1) {
            int num;
            cin>>num;
            stack_int.push(num);
        } else {
            if(stack_int.empty()) {
                cout<<"invalid"<<endl;
            } else {
                cout<<stack_int.top()<<endl;
                stack_int.pop();
            }
        }
    }
}
