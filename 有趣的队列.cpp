本题重新定义队列出队的操作：队首出队的数字重新在队尾入队。

例：队列中有1 2 3三个数字，现要求队首出队，则1从队首出队，同时1从队尾入队，队列变成2 3 1。

入队的顺序为1,2,3,4......n，同时给一个二进制字符串，1代表出队操作，0代表入队操作。

输入格式:
在第一行有两个数字n,m(n<=100,n<m)，其中n为入队的数字个数，m代表操作数

接下来m行，每行一个数字，1或者0，代表不同的操作

输出格式:
输出操作后队列的每个数字，数字间以空格分隔，最后一个数字后没有空格

输入样例:
5 8
0
0
1
0
1
0
1
0
输出样例:
3 2 4 1 5


#include <iostream>
#include <iomanip>
#include <queue>
using namespace std;

queue<int> q;

int main()
{
    int num, op, i; // num为入队的数字个数，op代表操作个数
    int n_push=1; // 表示队列的第一个数，后面的数依次+1即可
    cin>>num>>op;
    for(i=0; i<op; i++) {
        int add;
        cin>>add; // 0或1
        if(add==0) {
            q.push(n_push++);
        } else if(add==1) {
            int first = q.front();
            q.pop();
            q.push(first);
        }
    }
    cout<<q.front();
    q.pop();
    while(!q.empty()) {
        cout<<" "<<q.front();
        q.pop();
    }
}
