/*
��������ϰ������д����׺ʽ������ 3 + 5 * 2 ����ֵΪ13�� (p.s. Ϊʲô����ϰ����׺ʽ�أ�����Ϊ��׺ʽ�Ⱥ�׺ʽ����ô����
�����������ϰ�ߡ���׺ʽ����Ҳ�С��沨��ʽ����Reverse Polish Notation����������׺ʽ��Ӧ�ĺ�׺ʽ�ǣ� 3 5 2 * +
���ڣ��������ĺ�׺ʽ������ֵ��

�����ʽ:
��һ��������һ����׺ʽ���������������֮���ÿո�ָ������������Ȳ�����6λ�����������+ - * / ���֡�

�����ʽ:
��һ���������׺ʽ��ֵ������һλС����

��������:
3 5.4 2.2 * +
�������:
14.9
*/

#include <iostream>
#include <iomanip>
#include <stack>
#include <stdlib.h>
using namespace std;

//������ʽ
//left, right�����Ҳ�������op�ǲ����������ؽ��ֵ��
double solve(double left, double right, char op);

int main()
{
	//�����׺���ʽ
	char part[10];
	stack<double> sd;
	while(cin>>part)  //ֱ�������ϰ�Ctrl + Z��ʾ��������Ż��˳�ѭ��
	{
//		cout<<part<<" ";
		if (isdigit(part[0]) || isdigit(part[1])) { // isdigit() �������һ���ַ��Ƿ���ʮ��������
			double num = atof(part);  //atof()���ַ���ת��Ϊ������
			//cout<<num<<" ";
			sd.push(num);
		} else {
			if (sd.empty()) {
				cerr<<"���ʽ�д�����©���������"<<endl;
				exit(0); //exit()���˳�����
			}
			double right = sd.top();
			sd.pop();

			if (sd.empty()) {
				cerr<<"���ʽ�д�����©�Ҳ�������"<<endl;
				exit(0);
			}
			double left = sd.top();
			sd.pop();
			sd.push(solve(left, right, part[0]));
		}
	}
	cout<<fixed<<setprecision(1)<<sd.top();
}

//������ʽ
//left, right�����Ҳ�������op�ǲ����������ؽ��ֵ��
double solve(double left, double right, char op)
{
	if (op=='+')
		return left + right;
	else if(op == '-')
		return left - right;
	else if(op == '*')
		return left * right;
	else if(op == '/')
		return left / right;
	else
	{
		cerr<<"����������"<<endl;
		exit(0);
	}
}
