/*����һ��ѧ�������������ͳɼ�������������ɼ��Ӵ�С�����Ľ�������κ����������ɼ���ͬ����ӵ����ͬ�����Σ��Ұ��������ֵ����С�������С���Ŀ��֤ѧ������û���ظ���

�����ʽ:
��һ�и���������10000������N�� ������N�У�ÿ�и���ѧ�������ͳɼ����Կո�ָ���ѧ������������20���ַ���

�����ʽ:
�����N�У�ÿ�а�����Ӧ��ѧ���������������Կո�ָ���

��������:
7
KongDezhen 94
FuTaotao 93
HuYu 94
XuJiecen 94
WuSuqi 96
ChenDa 93
HuNianbo 95
�������:
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
