输入n值(1<=n<=1000)、n个非降序排列的整数以及要查找的数x，使用二分查找算法查找x，输出x所在的下标（0~n-1）及比较次数。若x不存在，输出-1和比较次数。

输入格式:
输入共三行： 第一行是n值； 第二行是n个整数； 第三行是x值。

输出格式:
输出x所在的下标（0~n-1）及比较次数。若x不存在，输出-1和比较次数。

输入样例:
4
1 2 3 4
1
输出样例:
0
2


#include <iostream>
using namespace std;
int main()
{
    int n, num[1000], x, count=0;
    cin>>n; // n个整数
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    cin>>x; // 要查找的数
    int left=0, right=n-1, mid, flag=0;
    while(left <= right) {
        flag++;
        mid = (left + right) / 2;
        if(num[mid] == x) {
            cout<<mid<<endl<<flag;
            return 0;
        } else if(num[mid] > x) {
            right = mid - 1;
        } else if(num[mid] < x) {
            left = mid + 1;
        }
        if(left > 1){
            cout<<"-1"<<endl<<flag;
            return 0;
        }
    }
}
