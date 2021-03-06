“单身狗”是中文对于单身人士的一种爱称。本题请你从上万人的大型派对中找出落单的客人，以便给予特殊关爱。

输入格式：
输入第一行给出一个正整数 N（≤50000），是已知夫妻/伴侣的对数；随后 N 行，每行给出一对夫妻/伴侣——为方便起见，每人对应一个 ID 号，为 5 位数字（从 00000 到 99999），ID 间以空格分隔；之后给出一个正整数 M（≤10000），为参加派对的总人数；随后一行给出这 M 位客人的 ID，以空格分隔。题目保证无人重婚或脚踩两条船。

输出格式：
首先第一行输出落单客人的总人数；随后第二行按 ID 递增顺序列出落单的客人。ID 间用 1 个空格分隔，行的首尾不得有多余空格。

输入样例：
3
11111 22222
33333 44444
55555 66666
7
55555 44444 10000 88888 22222 11111 23333
输出样例：
5
10000 23333 44444 55555 88888


#include <bits/stdc++.h>
using namespace std;

//结构体存储情侣关系
struct  lovers{
    string s1;
    string s2;
};

int main()
{
    int n, m; // n为已知夫妻或伴侣的对数，m为参加派对的总人数
    cin>>n;
    struct lovers l[n+1] ;
    for(int i=0; i<n; i++) {
        cin>>l[i].s1>>l[i].s2;
    }
    cin>>m;
    set<string> dan;
    for(int i=0; i<m; i++) {
        string id;
        cin>>id;
        dan.insert(id);
    }
    for(int i=0; i<m; i++) {
        //如果情侣两个人都在客人名单中，则将其删除
        if(dan.count(l[i].s1)==1 && dan.count(l[i].s2)==1) {
            dan.erase(l[i].s1);
            dan.erase(l[i].s2);
        }
    }
    set<string>::iterator it = dan.begin() ;
    cout<<dan.size()<<endl ;  // 落单客人的总人数
    if(!dan.empty()) {
        cout<<*it ;
        it++;
        for(it; it!=dan.end(); it++) {
            cout<<" "<<*it ;
        }
    }
}
