/*
����һ����ʼΪ�յ�ջ��һϵ��ѹջ����ջ���������д�������ÿ�ε�ջ��Ԫ�ء�ջ��Ԫ��ֵ��Ϊ������

�����ʽ:
�����1��Ϊ1��������n����ʾ����������������n�У�ÿ�б�ʾһ����������ʽΪ1 d��0��1 d��ʾ������dѹջ��0��ʾ��ջ��n������20000��
�����ʽ:
��˳�����ÿ�ε�ջ��Ԫ�أ�ÿ��Ԫ��һ�С���ĳ��ջ�������Ϸ�������ջ��ʱ��ջ������Ըò������invalid��

��������:
7
1 1
1 2
0
0
0
1 3
0
�������:
2
1
invalid
3
*/

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> stack_int;
    int n; // nΪ��������
    cin>>n;

    for(int i=0; i<n; i++) {
        int op;
        cin>>op;
        if(op==1) {
            int num;
            cin>>num;
            stack_int.push(num);
        } else {
            if(stack_int.empty()) {
                cout<<"invalid"<<endl;
            } else {
                cout<<stack_int.top()<<endl;
                stack_int.pop();
            }
        }
    }
}
