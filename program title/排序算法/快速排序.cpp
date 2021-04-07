输入样例：
第一行输入一个数n，接下来输入n个数。
7
24 53 45 45 12 24 90

输出样例：
输出按升序排序的结果。
12 24 24 45 45 53 90


#include <iostream>
using namespace std;

void quickSort(int num[], int startIndex, int endIndex);
int partition(int num[], int startIndex, int endIndex);

int main()
{
    int n;
    cin>>n;
    int num[n];
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    quickSort(num, 0, n-1);
    cout<<num[0];
    for(int i=1; i<n; i++) {
        cout<<" "<<num[i];
    }
}

void quickSort(int num[], int startIndex, int endIndex) {
    // 递归结束条件
    if(startIndex >=endIndex) return;
    // 得到基准元素位置
    int pivotIndex = partition(num, startIndex, endIndex);
    // 根据基准元素，分成两部分进行递归排序
    quickSort(num, startIndex, pivotIndex-1);
    quickSort(num, pivotIndex+1, endIndex);
}
// 单边循环法
int partition(int num[], int startIndex, int endIndex) {
    // 取第一个位置的元素为基准元素
    int pivot = num[startIndex];
    int mark = startIndex;

    for(int i=startIndex+1; i<=endIndex; i++) {
        if(num[i]<pivot) {
            mark++;
            int sign = num[mark];
            num[mark] = num[i];
            num[i] = sign;
        }
    }

    num[startIndex] = num[mark];
    num[mark] = pivot;
    return mark;
}
