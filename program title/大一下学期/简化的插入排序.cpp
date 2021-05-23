本题要求编写程序，将一个给定的整数插到原本有序的整数序列中，使结果序列仍然有序。

输入格式：
输入在第一行先给出非负整数N（<10）；第二行给出N个从小到大排好顺序的整数；第三行给出一个整数X。

输出格式：
在一行内输出将X插入后仍然从小到大有序的整数序列，每个数字后面有一个空格。

输入样例：
5
1 2 4 5 7
3
输出样例：
1 2 3 4 5 7


#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num[n+1];
    for(int i = 0; i < n; i++)
        cin>>num[i];
    cin>>num[n];
    sort(num, num+n+1);
    for(int i = 0; i < n + 1; i++) {
        cout<<num[i]<<" ";
    }
}
