����nֵ(1<=n<=1000)��n���ǽ������е������Լ�Ҫ���ҵ���x��ʹ�ö��ֲ����㷨����x�����x���ڵ��±꣨0~n-1�����Ƚϴ�������x�����ڣ����-1�ͱȽϴ�����

�����ʽ:
���빲���У� ��һ����nֵ�� �ڶ�����n�������� ��������xֵ��

�����ʽ:
���x���ڵ��±꣨0~n-1�����Ƚϴ�������x�����ڣ����-1�ͱȽϴ�����

��������:
4
1 2 3 4
1
�������:
0
2


#include <iostream>
using namespace std;
int main()
{
    int n, num[1000], x, count=0;
    cin>>n; // n������
    for(int i=0; i<n; i++) {
        cin>>num[i];
    }
    cin>>x; // Ҫ���ҵ���
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
