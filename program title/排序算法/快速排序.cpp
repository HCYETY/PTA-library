����������
��һ������һ����n������������n������
7
24 53 45 45 12 24 90

���������
�������������Ľ����
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
    // �ݹ��������
    if(startIndex >=endIndex) return;
    // �õ���׼Ԫ��λ��
    int pivotIndex = partition(num, startIndex, endIndex);
    // ���ݻ�׼Ԫ�أ��ֳ������ֽ��еݹ�����
    quickSort(num, startIndex, pivotIndex-1);
    quickSort(num, pivotIndex+1, endIndex);
}
// ����ѭ����
int partition(int num[], int startIndex, int endIndex) {
    // ȡ��һ��λ�õ�Ԫ��Ϊ��׼Ԫ��
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
