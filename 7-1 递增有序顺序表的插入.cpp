/*
ʵ��Ŀ�ģ�1���������Ա�Ļ���֪ʶ 2��������⡢���ղ�����������Ա�3�������������Ա�Ĵ洢�ṹ����Ҫ�����ʵ�� ��֪˳���L�������򣬽�X���뵽���Ա���ʵ�λ���ϣ���֤���Ա����򡣡�

�����ʽ:
��1������˳����ȣ���2��������������˳�����3������Ҫ���������Ԫ��X��

�����ʽ:
��ÿһ�����룬��һ�����������X��ĵ�����˳���

��������:
5
1 3 5 7 9
6
�������:
1,3,5,6,7,9,
*/

// �ⷨһ��C++
#include<iostream>
#include<list>
using namespace std;
typedef list<int> listint;
int main(){
    int date,N,z,insert,sign=0;
    listint list_1,list_3;
    cin>>N;
    for(z=0;z<N;z++){
        cin>>date;
        list_1.push_back(date);
    }
    cin>>insert;
    listint::iterator i,j;
    i=list_1.begin();
    j=list_1.begin();
    j++;
    if(*i>insert){
        list_3.push_back(insert);
        sign=1;
     }
    while(i!=list_1.end()){
        if(*i<insert&&*j>insert){
            list_3.push_back(*i);
            list_3.push_back(insert);
            i++;
            j++;
            sign=1;
        }else{
            list_3.push_back(*i);
            i++;
            j++;
        }
    }
    if(sign==0){
        list_3.push_back(insert);
    }
    for(i=list_3.begin();i!=list_3.end();i++){
        cout<<*i<<",";
    }
}
// �ⷨ��:C
#include<stdio.h>
int main(){
	int n, k, i; // nΪ˳�����, kΪ���������
	scanf("%d",&n);
	int sum[n]; // ���������˳���
	for(i=0; i<n; i++) {
		scanf("%d",&sum[i]);
	}
	scanf("%d",&k);
    for(i=0; i<n; i++) {
        if(k<=sum[i]) {
            for(int j=n-1; j>=i; j--) {
                sum[j+1] = sum[j];
            }
            sum[i] = k;
            n++;
            break;
        }
    }
    if(i==n) {
		 sum[n] = k;
		 for(i=0; i<n+1; i++)
             printf("%d,", sum[i]);
	 } else {
		for(i=0; i<n; i++)
            printf("%d,", sum[i]);
	}
}
