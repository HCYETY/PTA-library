/*给出一组学生名单（姓名和成绩），请输出按成绩从大到小排序后的结果（名次和姓名）。成绩相同的人拥有相同的名次，且按姓名的字典序从小到大排列。题目保证学生姓名没有重复。

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
6 FuTaotao  */


#include <iostream>
using namespace std;

struct student {
    char name;
    int score;
};

int main()
{
    int n, i, j;
    cin>>n;
    struct student in[n];
    for(i=0; i<n; i++) {
        cin>>in[i].name>>in[i].score;
    }
    int sign, place;
    for(i=0; i<n; i++) {
        for(j=0; j<n-i; j++) {
            if(in[j].score<=in[j+1].score) {
                sign = in[j+1].score;
                in[j+1] = in[j];
                in[j].score = sign;
            }
            if(in[j].score != in[j+1].score) {
                place += 1;
            }
        }
    }
    for(i=0; i<n; i++) {
        cout<<place<<" "<<in[i].name<<endl;
    }

}

#include <iostream>
using namespace std;

struct student {
    char name;
    int score;
};
bool cmp(struct student &a,struct student &b)
{
    if(a->score==b->score)
    {
        strcmp
    }
    else
    {
        return a->score>b->score;
    }
}
int main()
{
    int n, i, j;
    cin>>n;
    struct student in[n];
    for(i=0; i<n; i++) {
        cin>>in[i].name>>in[i].score;
    }
    int sign[10000], place;

    for(i=0; i<n; i++) {
        cout<<place<<" "<<in[i].name<<endl;
    }

}
