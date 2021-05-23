/*
���ϵ�Ӱ��007֮������ͷ����Live and Let Die������һ����ڣ�007������ץ��һ����������ĵ�С���ϣ�������һ�ּ�Ϊ�󵨵ķ������� ���� ֱ�Ӳ��ų�����һϵ������Ĵ��Դ����ϰ�ȥ������˵����������Ա�����һ������ҧס�˽ţ��Һô������ر�Ӻ��ѥ�Ӳ��ӹ�һ�١���
��������ǳ���Ϊ100�׵ķ��Σ���������Ϊ (0, 0)���Ҷ���������Ϊ (50, 50)�����ĵ����� (0, 0) ΪԲ�ġ�ֱ��15�׵�Բ���������зֲ�����������ꡢ�Լ�007һ������Ծ�������룬����Ҫ�������Ƿ��п����ӳ����졣

�����ʽ��
���ȵ�һ�и����������������������� N����100����007һ������Ծ�������� D����� N �У�ÿ�и���һ������� (x,y) ���ꡣע�⣺�����������������ͬһ�����ϡ�

�����ʽ��
���007�п������ѣ�����һ�������"Yes"���������"No"��

�������� 1��
14 20
25 -15
-25 28
8 49
29 15
-35 -2
5 28
27 -29
-8 -28
-20 -35
-25 -20
-13 29
-30 15
-35 40
12 12
������� 1��
Yes

�������� 2��
4 13
-12 12
12 12
-12 -12
12 -12
������� 2��
No
*/


#include <bits/stdc++.h>
using namespace std;

struct node {
    int x,y; // �ֱ��ʾ����ĺ������������
}crocodile[110];

int vis[110];
int flag = 0;
int n, jump_distance;

int keyi(int x) { //������Գɹ����ﰶ��
    if( (crocodile[x].x - jump_distance <= -50) || (crocodile[x].x + jump_distance >= 50) || (crocodile[x].y - jump_distance <= -50) || (crocodile[x].y + jump_distance >= 50) )
        return 1;
    return 0;
}

int first(int x) { //��һ��
    int cro1 = pow(crocodile[x].x, 2);
    int cro2 = pow(crocodile[x].y, 2);
    int r = pow((jump_distance + 7.5), 2);
//    int r = (jump_distance + 7.5) * (jump_distance + 7.5);
    if(cro1 + cro2 <= r)
        return 1;
    return 0;
}

int jump(int x,int y) { //�ܷ��һ������ͷ������һ������ͷ
    int cro1 = pow(crocodile[x].x - crocodile[y].x, 2);
    int cro2 = pow(crocodile[x].y - crocodile[y].y, 2);
    int r = pow(jump_distance, 2);
//    int r = jump_distance * jump_distance;
    if(cro1 + cro2 <= r)
        return 1;
    return 0;
}

int dfs(int t) {
    vis[t] = 1;
    if(keyi(t) == 1)
        flag = 1;
    for(int i = 0; i < n; i++)
        if(!vis[i] && jump(t,i))
            flag = dfs(i);
    return flag;
}

int main()
{
    memset(vis,0,sizeof(vis));
    scanf("%d %d", &n, &jump_distance);
    for(int i = 0; i < n; i++)
        scanf("%d %d", &crocodile[i].x, &crocodile[i].y);
    if(jump_distance >= 42.5)
        printf("Yes\n");
    else {
        for(int i = 0; i < n; i++)
            if(!vis[i] && first(i))
                dfs(i);
        if(flag == 1)
            printf("Yes\n");
        else
            printf("No\n");
    }
    return 0;
}
