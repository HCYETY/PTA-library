��׺���ʽ���ֳ��沨��ʽ��ָ���ǲ��������ţ���������������������ĺ��棬���еļ��㰴��������ֵ�˳���ϸ�������ҽ��С�

���ú�׺���ʽ���м���ľ���������

����һ��������ջS��Ȼ������Ҷ����ʽ����������������ͽ���ѹ��ջS�У��������nԪ�����(����Ҫ��������Ϊn�������)��ȡ����ջ�����µ�n��������������㣬�ٽ�����Ľ������ԭջ����n��ѹ��ջ�С��ظ�������̣������׺���ʽ������ջ��ֻʣһ��������������������������������׺���ʽ���굫��ջ�в���������һ�������׺���ʽ�������ջ�в�����ֻʣһ�������Ǻ�׺���ʽ��δ�����ҵ�ǰ�����Ϊ˫Ԫ�����������׺���ʽͬ������

�����ʽ:
��һ��������һ����#�Ž����ķǿպ�׺ʽ��#�����ڱ��ʽ��һ���֣�����������������Կո�ָ���������Ϊ����ֵ������100�����������������+��-��*��/ ���֡�

�����ʽ:
�����׺ʽ�����������еļ��㶼ֻȡ������������֡���Ŀ��֤������м��������ľ���ֵ��������10
?9
?? ��

���ִ�г���ʱ���ַ�ĸΪ��ķǷ�����������һ���������Error: X/0��X�ǵ�ʱ�ķ��ӡ�

�����׺���ʽ����������˻������ˣ�����һ���������Expression Error: X��X�ǵ�ʱջ��Ԫ�ء�

��������1:
5 -2 + 3 * #
�������1:
9
��������2:
5 -2 2 + / #
�������2:
Error: 5/0
��������3:
5 -1 3 + / - * #
�������3:
Expression Error: 2


#include <bits/stdc++.h>
using namespace std;

int solve(int left, int right, char op);

int main()
{
    char pack[1000];
    stack<int> st;
    while(cin>>pack) {
        if(pack[0]=='#') {
            break;
        }
        if(isdigit(pack[0]) || isdigit(pack[1])) {
            st.push( atoi(pack) );
        } else {
            if(st.empty()) {
                cout<<"Expression Error: "<<right;
                return 0;
            }
            int right = st.top();
            st.pop();
            if(st.empty()) {
                cout<<"Expression Error: "<<right;
                return 0;
            }
            int left = st.top();
            st.pop();
            st.push(solve(left, right, pack[0]));
        }
    }
    if(st.size()==1) {
        cout<<st.top();
    } else {
        cout<<"Expression Error: "<<st.top();
    }
}

int solve(int left, int right, char op) {
    if (op=='+')
        return left + right;
    else if(op == '-')
        return left - right;
    else if(op == '*')
        return left * right;
    else if(op == '/') {
        if(right == 0) {
            cout<<"Error: "<<left<<"/0";
            exit(0);
        }
        return left / right;
    }
    else {
        cerr<<"����������"<<endl;
        exit(0);
    }
}
