�������ʽ��ǰ׺��ʾ������׺��ʾ���ͺ�׺��ʾ������ʽ��ǰ׺���ʽָ��Ԫ�����λ������������֮ǰ������2+3*(7-4)+8/4��ǰ׺���ʽ�ǣ�+ + 2 * 3 - 7 4 / 8 4������Ƴ������ǰ׺���ʽ�Ľ��ֵ��

�����ʽ:
������һ���ڸ���������30���ַ���ǰ׺���ʽ��ֻ����+��-��*��/�Լ�����������ͬ������������������ţ�֮���Կո�ָ���

�����ʽ:
���ǰ׺���ʽ��������������С�����1λ���������ϢERROR��

��������:
+ + 2 * 3 - 7 4 / 8 4
�������:
13.0


#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <double> sd;
    string s;
    getline(cin, s);
    for(int i=s.size()-1; i>=0; i--) {
        if(isdigit(s[i])) {  							// �����i+1��Ԫ����һ����
            double mul = 10, num = s[i] - '0'; 	// �ѵ�i+1λ�������ֵȡ����
            for (i--; i >= 0; i--) { 				// �жϵ�i��λ����ʲô
                if(isdigit(s[i])) { 					// �����һ����
                    num += mul * (s[i] - '0'); 		// ��ô���������ʮλ��
                    mul *= 10; 						// ����mul����Ϊ�µ�i-1λ���Ͽ��ܻ���һ������Ҳ���ǰ�λ
                } else if (s[i] == '.') { 			// �����iλ������С����
                    num /= mul; 							// ���ŵ�i+1λ���ϵ�������С�����λ��
                    mul = 1; 							// ͬ������mul
                } else if (s[i] == '-') { 			// �����iλ�����Ǹ���
                    num = -num; 						// ����������Ϊ����
                } else
                    break;
            }
            sd.push(num);
        } else if(s[i] != ' ') {						   // ���������
            double left = sd.top();
            sd.pop();
            double right = sd.top();
            sd.pop();
            if(s[i] == '+')
                sd.push(left + right);
            else if(s[i] == '-')
                sd.push(left - right);
            else if(s[i] == '*')
                sd.push(left * right);
            else if(s[i] == '/') {
                if(right == 0) {
                    cout<<"ERROR";
                    exit(0);
                }
                sd.push(left / right);
            }
        }
    }
    cout<<fixed<<setprecision(1)<<sd.top()<<endl;
}
