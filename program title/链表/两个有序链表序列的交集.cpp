/*
��֪�����ǽ�����������S1��S2����ƺ��������S1��S2�Ľ���������S3��

�����ʽ:
��������У��ֱ���ÿ�и��������ɸ����������ɵķǽ������У���?1��ʾ���еĽ�β��?1������������У��������ÿո�����

�����ʽ:
��һ������������������еĽ������У����ּ��ÿո�ֿ�����β�����ж���ո���������Ϊ�գ����NULL��

��������:
1 2 5 -1
2 4 5 8 10 -1
�������:
2 5
*/
#include<iostream>
#include<list>
using namespace std;
typedef list<int> listint;
int main(){
    int date,flag;
    listint lint_1,lint_2,lint_3;
    while(1){
        cin>>date;
        if(date==-1)break;
        lint_1.push_back(date);
    }
    while(1){
        cin>>date;
        if(date==-1)break;
        lint_2.push_back(date);
    }
    listint::iterator i,j;
    i=lint_1.begin();
    j=lint_2.begin();
    while(i!=lint_1.end()&&j!=lint_2.end()){
        if(*i>*j){
            j++;
        }else if(*i<*j){
            i++;
        }else {
            lint_3.push_back(*i);
            i++;
            j++;
        }
    }
    j=lint_3.end();
    j--;
    if(*j==NULL)cout<<"NULL";
    for(i=lint_3.begin();i!=lint_3.end();i++){
        cout<<*i;
        if(i!=j)cout<<" ";
    }
}
