/*
��Ŀ������
����һ���� n �����ʵĴʵ� ��
�� q ��ѯ�ʣ�ÿ��ѯ�ʸ���һ�����ʣ�ѯ���ж��ٸ����ʿ���ͨ������������ĸ��Ҳ���Բ���������ɸ����ĵ���  ��

��������:
��һ��һ������ n ��
������ n �У�ÿ��һ������ ��
�� n+2 ��һ������ q ��
������ q ��ÿ��һ�����ʣ���ʾѯ�� ��
�������:
�� q �У�ÿ��һ����������ʾ�ж��ٸ����󵥴� ��

���룺
4
aa
bb
ab
ba
2
aa
ba
�����
1
2
��ע:
n��q <= 10^4�����ʳ��� <= 2�������е���ĸȫΪСд��
*/

#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int n, q;
    int i, j, count;
    char word[10005][5], ask[10005][5];
    scanf("%d\n", &n);
    for(i=0; i<n; i++) {
        scanf("%s\n", &word[i]);
    }
    scanf("%d\n", &q);
    for(j=0; j<q; j++) {
        scanf("%s\n", &ask[j]);
    }
     for(i=0;i<q;i++)
    {
        count = 0;
        for(j=0;j<n;j++)
        {
            if((word[j][0] == ask[i][0] && word[j][1] == ask[i][1]) || (word[j][0] == ask[i][1] && word[j][1] == ask[i][0]))
                count++;
        }
        printf("%d\n",count);
    }
}
