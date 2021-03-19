/*
小李是程序设计竞赛爱好者，他现在遇到了这么一个问题：给定一个只有A，C，M三个字母组成的字符串且长度不超过10000000。如果字符串中存在“ACM”子串，那么这个“ACM”子串可以自动消掉，消掉后，后面的元素都前移再变成一个新的完整的字符串。这个新串继续这样做，直到被消成空串或不再有”ACM”子串。GGS的任务是判断给定的字符串是否能被消为空串，如果可以，那么输出YES,否则输出NO。当然，小李可以很快完成这个简单的问题，你也快点去完成吧~

输入格式:
输入一个字符串只含有A,C,M（大写）且非空。
输出格式:
输出YES或NO，输出单独占一行。

输入样例-1:
ACM
输出样例-1:
YES

输入样例-2:
AACMCM
输出样例-2:
YES

输入样例-3:
ACACCM
输出样例-3:
NO
*/
#include <iostream>
using namespace std;

int main()
{
    char part;
    string s;
    int count=0;
    while((part=getchar())!='\n') {
        s += part;
        count++;
        while(count>=3 && s[count-1]=='M' && s[count-2]=='C' && s[count-3]=='A') {
            count -= 3;
            s.erase(count);
        }
    }
    if(count == 0)
        cout<<"YES";
    else
        cout<<"NO";
}
