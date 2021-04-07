/*
假设以S和X分别表示入栈和出栈操作。如果根据一个仅由S和X构成的序列，对一个空堆栈进行操作，相应操作均可行（如没有出现删除时栈空）且最后状态也是栈空，则称该序列是合法的堆栈操作序列。请编写程序，输入S和X序列，判断该序列是否合法。

输入格式:
输入第一行给出两个正整数N和M，其中N是待测序列的个数，M（≤50）是堆栈的最大容量。随后N行，每行中给出一个仅由S和X构成的序列。序列保证不为空，且长度不超过100。
输出格式:
对每个序列，在一行中输出YES如果该序列是合法的堆栈操作序列，或NO如果不是。

输入样例：
4 10
SSSXXSXXSX
SSSXXSXXS
SSSSSSSSSSXSSXXXXXXXXXXX
SSSXXSXXX
输出样例：
YES
NO
NO
NO
*/

#include <bits/stdc++.h>
using namespace std;

bool isok(string line, int stack_max_size);

int main()
{
	int n, m;
	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		char s_or_x[101];
        cin>>s_or_x;
		if (isok(s_or_x, m))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}

bool isok(string line, int stack_max_size)
{
	stack<int> istack;
	for (int i = 0; i < line.size(); i++)
	{
		if (line[i] == 'S')
		{
			if (istack.size() >= stack_max_size)
				return false;
			istack.push(i);
		}
		else if (line[i] == 'X')
		{
			if (istack.empty())
				return false;
			istack.pop();
		}
	}
	return istack.empty();
}
