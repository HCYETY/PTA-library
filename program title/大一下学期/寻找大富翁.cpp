/*
�����о�Ժ�ĵ�����ʾ������2017��ף��й������ʲ�����1��Ԫ�ĸ߾�ֵ��Ⱥ��15���ˡ�
�������N���˵ĸ����ʲ�ֵ��������ҳ��ʲ���ǰMλ�Ĵ��̡�

�����ʽ:
�������ȸ�������������N��M������NΪ��������MΪ��Ҫ�ҳ��Ĵ�������
������һ�и���N���˵ĸ����ʲ�ֵ���԰���ԪΪ��λ��Ϊ�����������ͷ�Χ�����������ּ��Կո�ָ���

�����ʽ:
��һ���ڰ��ǵ���˳������ʲ���ǰMλ�Ĵ��̵ĸ����ʲ�ֵ�����ּ��Կո�ָ�������β�����ж���ո�

��������:
8 3
8 12 7 3 20 9 5 18
�������:
20 18 12
*/

#include <bits/stdc++.h>
using namespace std;

bool cmp(int a,int b)
{
    return a>b;//�������У�
}

int main()
{
    int num, place;
    cin>>num>>place;
    if(num < place) {

    }
    int people[num];
    for(int i = 0; i < num; i++) {
        cin>>people[i];
    }
    sort(people, people + num, cmp);
    if(num < place) place = num;
    cout<<people[0];
    for(int i = 1; i < place; i++) {
        cout<<" "<<people[i];
    }
}
