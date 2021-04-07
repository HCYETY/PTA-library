����һ���򵥵Ķ��������⣡
���ǽ�����һ�Ŷ���������������������ֱ������ֱ������������������������������

�����ʽ:
��һ�и���һ��������N��N<=100)����ʾ�������ϵĽڵ������
������N�У�ÿ�а�������������i��l��r���ֱ�����i���ڵ�����Һ��ӣ�
���������/�Һ���Ϊ�գ����ڶ�Ӧλ�ø���-1��

��Ŀ��֤1�Ǹ��ڵ㣡

�����ʽ:
��һ���������������ڶ���������������������������������
ÿ��ĩβ�޶���ո�

��������:
3
1 2 3
2 -1 -1
3 -1 -1
�������:
1 2 3
2 1 3
2 3 1


#include <bits/stdc++.h>
using namespace std;

typedef int NodeId;
struct TreeNode
{
	int number;
	NodeId left, right;
	
	TreeNode():left(-1), right(-1){
	}
};

int sign = 0;
//��ӡ����š� 
void print_node(NodeId number)
{
	if (sign == 0)
		cout<<number;
	else
		cout<<" "<<number;
	sign += 1;
}

//������/����tree�������root
void preorder(TreeNode* tree, NodeId root);  //�������
void inorder(TreeNode* tree, NodeId root);   //�������
void postorder(TreeNode* tree, NodeId root);  //�������

int main()
{
	int n;
	cin>>n;
	
	TreeNode* tree = new TreeNode[n+1];  //����n�����Ĵ洢�ռ� 
	for(int i=0; i<n; i++)
	{
		int father, left, right;
		cin>>father>>left>>right;
  		tree[father].number = father;
		tree[father].left = left;  //��������
		tree[father].right = right; //�����Һ���
	}
	NodeId root = 1;  //1�Ž���Ǹ��ڵ� 
	//�������
	sign = 0;
	preorder(tree, 1); 
	cout<<endl;
	//������� 
	sign = 0;
	inorder(tree, 1); 
	cout<<endl;
	//�������
	sign = 0;
	postorder(tree, 1); 
	cout<<endl;	
}

//�������
//������/����tree�������root
void preorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	print_node(tree[root].number);
	preorder(tree, tree[root].left);
	preorder(tree, tree[root].right);
	return ;
} 


//�������
//������/����tree�������root
void inorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	inorder(tree, tree[root].left);
	print_node(tree[root].number);
	inorder(tree, tree[root].right);
	return ;
} 

//�������
//������/����tree�������root
void postorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	postorder(tree, tree[root].left);
	postorder(tree, tree[root].right);
	print_node(tree[root].number);
	return ;
} 
