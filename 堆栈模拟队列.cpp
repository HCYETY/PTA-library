����֪��������ջS1��S2��������������ջģ���һ������Q��

��ν�ö�ջģ����У�ʵ���Ͼ���ͨ�����ö�ջ�����в�������:

int IsFull(Stack S)���ж϶�ջS�Ƿ�����������1��0��
int IsEmpty (Stack S )���ж϶�ջS�Ƿ�Ϊ�գ�����1��0��
void Push(Stack S, ElementType item )����Ԫ��itemѹ���ջS��
ElementType Pop(Stack S )��ɾ��������S��ջ��Ԫ�ء�
ʵ�ֶ��еĲ����������void AddQ(ElementType item)�ͳ���ElementType DeleteQ()��

�����ʽ:
�������ȸ�������������N1��N2����ʾ��ջS1��S2�����������������һϵ�еĶ��в�����A item��ʾ��item���У��������itemΪ�������֣���D��ʾ���Ӳ�����T��ʾ���������

�����ʽ:
�������е�ÿ��D�����������Ӧ���ӵ����֣����ߴ�����ϢERROR:Empty�������Ӳ����޷�ִ�У�Ҳ��Ҫ���ERROR:Full��ÿ�����ռ1�С�

��������:
3 2
A 1 A 2 A 3 A 4 A 5 D A 6 D A 7 D A 8 D D D D T
�������:
ERROR:Full
1
ERROR:Full
2
3
4
7
8
ERROR:Empty


#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int N1, N2, i;
    char le;
    stack<int> S1, S2;
    cin>>N1>>N2;
    if(N1>N2){
        int n = N1;
        N1 = N2;
        N2 = n;
    }
    while(cin>>le) {
        if(le!='T') {
            if(le=='A') {
                int item;
                cin>>item;
                if(S1.size()!=N1) {
                    S1.push(item);
                } else if(S1.size()==N1 && S2.size()==0) {
                    while(!S1.empty()){
                        S2.push(S1.top());
                        S1.pop();
                    }
                    S1.push(item);
                } else if(S1.size()==N1 && S2.size()!=0) {
                    cout<<"ERROR:Full"<<endl;
                }
            } else if(le=='D') {
                if(S2.size()!=0) {
                    cout<<S2.top()<<endl;
                    S2.pop();
                } else if(S2.size()==0 && S1.size()!=0) {
                    while(!S1.empty()){
                        S2.push(S1.top());
                        S1.pop();
                    }
                    cout<<S2.top()<<endl;
                    S2.pop();
                } else if(S2.size()==0 && S1.size()==0) {
                    cout<<"ERROR:Empty"<<endl;
                }
            }
        } else {
            exit(0);
        }
    }
}
