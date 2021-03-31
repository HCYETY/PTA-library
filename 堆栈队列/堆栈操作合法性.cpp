/*
������S��X�ֱ��ʾ��ջ�ͳ�ջ�������������һ������S��X���ɵ����У���һ���ն�ջ���в�������Ӧ���������У���û�г���ɾ��ʱջ�գ������״̬Ҳ��ջ�գ���Ƹ������ǺϷ��Ķ�ջ�������С����д��������S��X���У��жϸ������Ƿ�Ϸ���

�����ʽ:
�����һ�и�������������N��M������N�Ǵ������еĸ�����M����50���Ƕ�ջ��������������N�У�ÿ���и���һ������S��X���ɵ����С����б�֤��Ϊ�գ��ҳ��Ȳ�����100��
�����ʽ:
��ÿ�����У���һ�������YES����������ǺϷ��Ķ�ջ�������У���NO������ǡ�

����������
4 10
SSSXXSXXSX
SSSXXSXXS
SSSSSSSSSSXSSXXXXXXXXXXX
SSSXXSXXX
���������
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
