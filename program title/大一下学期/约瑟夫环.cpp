N个人围成一圈顺序编号，从1号开始按1、2、3......顺序报数，报p者退出圈外，其余的人再从1、2、3开始报数，报p的人再退出圈外，以此类推。 请按退出顺序输出每个退出人的原序号。

输入格式:
输入只有一行，包括一个整数N(1<=N<=3000)及一个整数p(1<=p<=5000)。

输出格式:
按退出顺序输出每个退出人的原序号，数据间以一个空格分隔，但行尾无空格。

输入样例:
在这里给出一组输入。例如：

7 3
输出样例:
3 6 2 7 5 1 4


#include <iostream>
using namespace std;
int main()
{
    int N, p, number[3005]; // N个人, p为退局数字, number[3005]保存每个人的原序号
    cin>>N>>p;
    for(int i=0; i<N; i++) {
        number[i]=i+1;
    }
    int count = 0, num = 0, add[3005]; // count为场上剩余人数, num为报数, add[3005]保存退局人的原序号
    while(count!=N) {
        for(int i=0; i<N; i++) {
            if(number[i]==0) continue;
            num++;
            if(num != p) continue;
            num=0;
            add[count++]=number[i];
            number[i]=0;
        }
    }
    cout<<add[0];
	for(int i=1; i<N; i++) {
		cout<<" "<<add[i];
	}
}
