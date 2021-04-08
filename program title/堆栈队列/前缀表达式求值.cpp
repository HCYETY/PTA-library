算术表达式有前缀表示法、中缀表示法和后缀表示法等形式。前缀表达式指二元运算符位于两个运算数之前，例如2+3*(7-4)+8/4的前缀表达式是：+ + 2 * 3 - 7 4 / 8 4。请设计程序计算前缀表达式的结果值。

输入格式:
输入在一行内给出不超过30个字符的前缀表达式，只包含+、-、*、/以及运算数，不同对象（运算数、运算符号）之间以空格分隔。

输出格式:
输出前缀表达式的运算结果，保留小数点后1位，或错误信息ERROR。

输入样例:
+ + 2 * 3 - 7 4 / 8 4
输出样例:
13.0


#include <bits/stdc++.h>
using namespace std;
int main()
{
    stack <double> sd;
    string s;
    getline(cin, s);
    for(int i=s.size()-1; i>=0; i--) {
        if(isdigit(s[i])) {  							// 如果第i+1个元素是一个数
            double mul = 10, num = s[i] - '0'; 	// 把第i+1位置这个数值取出来
            for (i--; i >= 0; i--) { 				// 判断第i个位置是什么
                if(isdigit(s[i])) { 					// 如果是一个数
                    num += mul * (s[i] - '0'); 		// 那么这个数就是十位数
                    mul *= 10; 						// 更新mul，因为下第i-1位置上可能还是一个数，也就是百位
                } else if (s[i] == '.') { 			// 如果第i位置上是小数点
                    num /= mul; 							// 方才第i+1位置上的数属于小数点的位置
                    mul = 1; 							// 同样更新mul
                } else if (s[i] == '-') { 			// 如果第i位置上是负号
                    num = -num; 						// 将该数设置为负数
                } else
                    break;
            }
            sd.push(num);
        } else if(s[i] != ' ') {						   // 遇到运算符
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
