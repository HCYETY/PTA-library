����һ��ѧ�������������ͳɼ�������������ɼ��Ӵ�С�����Ľ�������κ����������ɼ���ͬ����ӵ����ͬ�����Σ��Ұ��������ֵ����С�������С���Ŀ��֤ѧ������û���ظ���

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
6 FuTaotao

����㣺�ɼ���������������������


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
