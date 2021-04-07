ͨ������ָ����Ϣ���ȸ����У�����������У��������������������ȸ������򣩡��и������򣩡���������򣩱��������������������ֵΪ������0������������������Ҳ�����Ǹ���������ָ����0��ʾ��

�����ʽ:
����Ϊһ���ÿո�������������ʾ����ָ����Ϣ�Ķ������ȸ����С����п�ָ����Ϣ��0��ʾ��������������������150000���߶Ȳ�����6000���������ݱ�֤���������������ֵ������ȡ�

�����ʽ:
���Ϊ3��������ÿ��������һ���ո񡣵�1��Ϊ�ö��������ȸ����У���2��Ϊ�и����У���3��Ϊ������С�

��������:
1 5 8 0 0 0 6 0 0
�������:
1 5 8 6
8 5 1 6
8 5 6 1

#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int number;
	TreeNode* lchild, *rchild;

	TreeNode():lchild(NULL), rchild(NULL){
	}
};

//������������ִ������������
TreeNode* create_tree();
//������/����tree�������root
void preorder(TreeNode* tree);  //�������
void inorder(TreeNode* tree);   //�������
void postorder(TreeNode* tree);  //�������

int main()
{
	TreeNode* root = create_tree();

	preorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
}

TreeNode* create_tree()
{
	TreeNode* root = NULL;
	int root_number;
	if(cin>>root_number && root_number != 0)//���� >��Ϊ��=  ��Ŀ˵��������ݿ���������Ҳ�����Ǹ���
	{
		root = new TreeNode();
		root->number = root_number;

		root->lchild = create_tree();  //����������
		root->rchild = create_tree();  //����������
	}
	return root;
}
void preorder(TreeNode* tree)
{
	if(tree)
	{
		cout<<tree->number<<" ";
		preorder(tree->lchild);
		preorder(tree->rchild);
	}
}
void inorder(TreeNode* tree)
{
	if(tree)
	{
		inorder(tree->lchild);
		cout<<tree->number<<" ";
		inorder(tree->rchild);
	}
}
void postorder(TreeNode* tree)
{
	if(tree)
	{
		postorder(tree->lchild);
		postorder(tree->rchild);
		cout<<tree->number<<" ";
	}
}
