N����Χ��һȦ˳���ţ���1�ſ�ʼ��1��2��3......˳��������p���˳�Ȧ�⣬��������ٴ�1��2��3��ʼ��������p�������˳�Ȧ�⣬�Դ����ơ� �밴�˳�˳�����ÿ���˳��˵�ԭ��š�

�����ʽ:
����ֻ��һ�У�����һ������N(1<=N<=3000)��һ������p(1<=p<=5000)��

�����ʽ:
���˳�˳�����ÿ���˳��˵�ԭ��ţ����ݼ���һ���ո�ָ�������β�޿ո�

��������:
���������һ�����롣���磺

7 3
�������:
3 6 2 7 5 1 4


#include <iostream>
using namespace std;
int main()
{
    int N, p, number[3005]; // N����, pΪ�˾�����, number[3005]����ÿ���˵�ԭ���
    cin>>N>>p;
    for(int i=0; i<N; i++) {
        number[i]=i+1;
    }
    int count = 0, num = 0, add[3005]; // countΪ����ʣ������, numΪ����, add[3005]�����˾��˵�ԭ���
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
