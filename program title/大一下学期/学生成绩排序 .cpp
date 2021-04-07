给出一组学生名单（姓名和成绩），请输出按成绩从大到小排序后的结果（名次和姓名）。成绩相同的人拥有相同的名次，且按姓名的字典序从小到大排列。题目保证学生姓名没有重复。

输入格式:
第一行给出不大于10000的整数N。 接下来N行，每行给出学生姓名和成绩，以空格分隔。学生姓名不超过20个字符。

输出格式:
共输出N行，每行包含对应的学生排名和姓名，以空格分隔。

输入样例:
7
KongDezhen 94
FuTaotao 93
HuYu 94
XuJiecen 94
WuSuqi 96
ChenDa 93
HuNianbo 95
输出样例:
1 WuSuqi
2 HuNianbo
3 HuYu
3 KongDezhen
3 XuJiecen
6 ChenDa
6 FuTaotao

解决点：成绩排序、姓名排序、名次排序


#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int score;
};

bool cmp(struct student a, struct student b)
{
    if (a.score > b.score)
        return true;
    else if (a.score < b.score)
        return false;
    else {
        if(a.name > b.name)
            return false;
        else if (a.name < b.name)
            return true;
        else
            return true;
    }
}

int main()
{
    int n;
    cin>>n;
    struct student in[10000];
    for(int i=0; i<n; i++) {
        cin>>in[i].name>>in[i].score;
    }
    sort(in, in+n, cmp);
    int pm = 0;
    for(int i=0; i<n; i++) {
        	if (!(i>0 && in[i].score == in[i-1].score))
            pm = i+1;
        	cout<<pm<<" "<<in[i].name<<endl;
    }
}
