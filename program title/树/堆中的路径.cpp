将一系列给定数字插入一个初始为空的小顶堆H[]。随后对任意给定的下标i，打印从H[i]到根结点的路径。

输入格式:
每组测试第1行包含2个正整数N和M(≤1000)，分别是插入元素的个数、以及需要打印的路径条数。下一行给出区间[-10000, 10000]内的N个要被插入一个初始为空的小顶堆的整数。最后一行给出M个下标。

输出格式:
对输入中给出的每个下标i，在一行中输出从H[i]到根结点的路径上的数据。数字间以1个空格分隔，行末不得有多余空格。

输入样例:
5 3
46 23 26 24 10
5 4 3
输出样例:
24 23 10
46 23 10
26 10


#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int tree[n+1];
	for(int i=1; i<=n; i++) {
		int t=i;
		cin>>tree[t];
		while(t/2>0 && tree[t/2]>tree[t]){
			int temp = tree[t/2];
			tree[t/2] = tree[t];
			tree[t] = temp;
			t/=2;
		}
	}
	while(m--){
		int num;
		cin>>num;
		cout<<tree[num];
		while(num/2>0){
			num/=2;
			cout<<" "<<tree[num];
		}
		cout<<endl;
	}
}
