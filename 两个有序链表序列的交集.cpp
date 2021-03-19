/*
已知两个非降序链表序列S1与S2，设计函数构造出S1与S2的交集新链表S3。

输入格式:
输入分两行，分别在每行给出由若干个正整数构成的非降序序列，用?1表示序列的结尾（?1不属于这个序列）。数字用空格间隔。

输出格式:
在一行中输出两个输入序列的交集序列，数字间用空格分开，结尾不能有多余空格；若新链表为空，输出NULL。

输入样例:
1 2 5 -1
2 4 5 8 10 -1
输出样例:
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
