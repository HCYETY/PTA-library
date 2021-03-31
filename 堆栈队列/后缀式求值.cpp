/*
我们人类习惯于书写“中缀式”，如 3 + 5 * 2 ，其值为13。 (p.s. 为什么人类习惯中缀式呢？是因为中缀式比后缀式好用么？）
而计算机更加习惯“后缀式”（也叫“逆波兰式”，Reverse Polish Notation）。上述中缀式对应的后缀式是： 3 5 2 * +
现在，请对输入的后缀式进行求值。

输入格式:
在一行中输入一个后缀式，运算数和运算符之间用空格分隔，运算数长度不超过6位，运算符仅有+ - * / 四种。

输出格式:
在一行中输出后缀式的值，保留一位小数。

输入样例:
3 5.4 2.2 * +
输出样例:
14.9
*/

#include <iostream>
#include <iomanip>
#include <stack>
#include <stdlib.h>
using namespace std;

//计算表达式
//left, right是左右操作数。op是操作符。返回结果值。
double solve(double left, double right, char op);

int main()
{
	//读入后缀表达式
	char part[10];
	stack<double> sd;
	while(cin>>part)  //直至键盘上按Ctrl + Z表示输入结束才会退出循环
	{
//		cout<<part<<" ";
		if (isdigit(part[0]) || isdigit(part[1])) { // isdigit() 用来检测一个字符是否是十进制数字
			double num = atof(part);  //atof()把字符串转换为浮点数
			//cout<<num<<" ";
			sd.push(num);
		} else {
			if (sd.empty()) {
				cerr<<"表达式有错误，遗漏左操作数！"<<endl;
				exit(0); //exit()将退出程序
			}
			double right = sd.top();
			sd.pop();

			if (sd.empty()) {
				cerr<<"表达式有错误，遗漏右操作数！"<<endl;
				exit(0);
			}
			double left = sd.top();
			sd.pop();
			sd.push(solve(left, right, part[0]));
		}
	}
	cout<<fixed<<setprecision(1)<<sd.top();
}

//计算表达式
//left, right是左右操作数。op是操作符。返回结果值。
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
		cerr<<"操作符有误！"<<endl;
		exit(0);
	}
}
