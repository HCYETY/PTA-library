/*
给定一个初始为空的栈和一系列压栈、弹栈操作，请编写程序输出每次弹栈的元素。栈的元素值均为整数。

输入格式:
输入第1行为1个正整数n，表示操作个数；接下来n行，每行表示一个操作，格式为1 d或0。1 d表示将整数d压栈，0表示弹栈。n不超过20000。

输出格式:
按顺序输出每次弹栈的元素，每个元素一行。若某弹栈操作不合法（如在栈空时弹栈），则对该操作输出invalid。

输入样例:
在这里给出一组输入。例如：

7
1 1
1 2
0
0
0
1 3
0
输出样例:
在这里给出相应的输出。例如：

2
1
invalid
3
*/

#include <iostream>
#include <stack>
using namespace std;

#define MAXSIZE 20000 // n不超过20000

typedef stack<int> STACKSTK;  // 把stack<int>记作STACKSTK

int main()
{
    STACKSTK stackstk;  // 定义了整数stack变量stackstk;
    int n, d, i; // n为操作个数
    for(i=0; i<n; i++) {
        if(cin>>) {
            cin>>"1">>" ">>d>>endl;
            stackstk.push_back(d);  // 针对stackstk调用push_back()，在尾部追加结点
        } else if(cin>>) {
            cin>>0>>endl;
            stackstk.push_back(d);  // 针对stackstk调用push_back()，在尾部追加结点
        }
    }
    STACKSTK result; // result是一个整数stack，用来存储奇数
    STACKSTK::iterator i;  // i是用来记住链表位置的变量
    //stackstk.begin()返回链表的首位置； stackstk.end()返回链表的结束位置
    for(i=stackstk.begin(); i!=stackstk.end(); i++) {
        if(POP) {
            result.push_back(*i);  //*i得到位置变量i所对应结点内的整数
        }
    }
    if (result.size() > 0)  //result.size()返回result链表内元素的个数。
	{
		i = result.begin();  // result.begin()返回result链表的首位置
		printf("%d", *i);    //*i到result链表内位置变量i所对应结点内的整数
		for(++i; i!=result.end(); ++i)//++i使得位置变量i往后移动一位
			printf(" %d", *i);
	}
}
