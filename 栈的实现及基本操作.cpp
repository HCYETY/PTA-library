/*
����һ����ʼΪ�յ�ջ��һϵ��ѹջ����ջ���������д�������ÿ�ε�ջ��Ԫ�ء�ջ��Ԫ��ֵ��Ϊ������

�����ʽ:
�����1��Ϊ1��������n����ʾ����������������n�У�ÿ�б�ʾһ����������ʽΪ1 d��0��1 d��ʾ������dѹջ��0��ʾ��ջ��n������20000��

�����ʽ:
��˳�����ÿ�ε�ջ��Ԫ�أ�ÿ��Ԫ��һ�С���ĳ��ջ�������Ϸ�������ջ��ʱ��ջ������Ըò������invalid��

��������:
���������һ�����롣���磺

7
1 1
1 2
0
0
0
1 3
0
�������:
�����������Ӧ����������磺

2
1
invalid
3
*/

#include <iostream>
#include <stack>
using namespace std;

#define MAXSIZE 20000 // n������20000

typedef stack<int> STACKSTK;  // ��stack<int>����STACKSTK

int main()
{
    STACKSTK stackstk;  // ����������stack����stackstk;
    int n, d, i; // nΪ��������
    for(i=0; i<n; i++) {
        if(cin>>) {
            cin>>"1">>" ">>d>>endl;
            stackstk.push_back(d);  // ���stackstk����push_back()����β��׷�ӽ��
        } else if(cin>>) {
            cin>>0>>endl;
            stackstk.push_back(d);  // ���stackstk����push_back()����β��׷�ӽ��
        }
    }
    STACKSTK result; // result��һ������stack�������洢����
    STACKSTK::iterator i;  // i��������ס����λ�õı���
    //stackstk.begin()�����������λ�ã� stackstk.end()��������Ľ���λ��
    for(i=stackstk.begin(); i!=stackstk.end(); i++) {
        if(POP) {
            result.push_back(*i);  //*i�õ�λ�ñ���i����Ӧ����ڵ�����
        }
    }
    if (result.size() > 0)  //result.size()����result������Ԫ�صĸ�����
	{
		i = result.begin();  // result.begin()����result�������λ��
		printf("%d", *i);    //*i��result������λ�ñ���i����Ӧ����ڵ�����
		for(++i; i!=result.end(); ++i)//++iʹ��λ�ñ���i�����ƶ�һλ
			printf(" %d", *i);
	}
}
