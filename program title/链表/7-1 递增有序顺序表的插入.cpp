/*
实验目的：1、掌握线性表的基本知识 2、深入理解、掌握并灵活运用线性表。3、熟练掌握线性表的存储结构及主要运算的实现 已知顺序表L递增有序，将X插入到线性表的适当位置上，保证线性表有序。。

输入格式:
第1行输入顺序表长度，第2行输入递增有序的顺序表，第3行输入要插入的数据元素X。

输出格式:
对每一组输入，在一行中输出插入X后的递增的顺序表。

输入样例:
5
1 3 5 7 9
6
输出样例:
1,3,5,6,7,9,
*/

// 解法一：C++
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
// 解法二:C
#include<stdio.h>
int main(){
	int n, k, i; // n为顺序表长度, k为插入的数字
	scanf("%d",&n);
	int sum[n]; // 递增有序的顺序表
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
