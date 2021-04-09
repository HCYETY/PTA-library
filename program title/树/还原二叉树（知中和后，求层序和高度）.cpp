/*
����һ�Ŷ���������������ͺ������������ʵ��������������
��1�����������Ŷ������Ĳ��������
��2�����������Ŷ����������ߡ�

�����ʽ:
��һ�а���һ������N��N<=1000�����������Ľڵ㽫��1��N��š�
�ڶ��а���N���ڵ��ţ���ʾ��Ŷ����������������
�����а���N���ڵ��ţ���ʾ��Ŷ������ĺ��������

�����ʽ:
��һ������������Ĳ���������ڵ���֮���ÿո�ָ���ĩβû�ж���ո�
�ڶ������һ����������������������ߡ�

��Ŀ����֤��������кϷ�������������Ϸ������������һ�������"ERROR"��ֱ���˳�����

��������:
6
6 5 4 3 2 1
5 6 2 3 1 4
�������:
4 6 1 5 3 2
4

��������:
3
2 1 3
3 2 1
�������:
ERROR
*/


#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
	int number;
	TreeNode* lchild, *rchild;

	TreeNode():lchild(NULL), rchild(NULL){
	}
};

//����������inorder�ͺ�������postorder�����ɶ����� 
TreeNode* create_tree(int* inorder, int* postorder, int len);
//������� 
void levelorder(TreeNode* root);
//�������ĸ߶�
int height(TreeNode* root);

int main()
{
	int n;
	cin>>n;
	
	int inorder[n]; // �������
	for (int i=0; i<n; i++)
		cin>>inorder[i];
	int postorder[n]; // �������
	for(int i=0; i<n; i++)
		cin>>postorder[i];
		
	TreeNode* root = create_tree(inorder, postorder, n);
	levelorder(root);
	cout<<endl;
	cout<<height(root);
} 

TreeNode* create_tree(int* inorder, int* postorder, int len)
{
	if(len == 0)
		return NULL;
	//�ҵ������ı��
	int root_number = postorder[len-1];
	
	//����������������������λ��
	int root_pos = -1;	
	for(int i=0; i<len; i++) {
		if (inorder[i] == root_number)
		{
			root_pos = i;
			break;
		}
	}
	
	if(root_pos == len)
	{
		cout<<"ERROR";
		exit(0);
	}
	int left_len = root_pos;  //�������Ľ����Ŀ
	int right_len = len - root_pos - 1;  //�������Ľ����Ŀ 
	
	TreeNode* root_node = new TreeNode();
	root_node->number = root_number;
	root_node->lchild = create_tree(inorder, postorder, left_len);
	root_node->rchild = create_tree(inorder + root_pos + 1, postorder+root_pos, right_len);
	return root_node;
}

void levelorder(TreeNode* root)
{
	if(root)
	{
		queue<TreeNode*> q_nodes;
		q_nodes.push(root);
		cout<<root->number;
		while(!q_nodes.empty())
		{
			TreeNode* node = q_nodes.front();
			q_nodes.pop();
			if(node->lchild)
			{
				q_nodes.push(node->lchild);
				cout<<" "<<node->lchild->number;
			}
			if(node->rchild)
			{
				q_nodes.push(node->rchild);
				cout<<" "<<node->rchild->number;
			}
		}
	}
}

int height(TreeNode* root)
{
	if(root == NULL) return 0;
	int left_height = height(root->lchild);
	int right_height = height(root->rchild);
   return left_height > right_height ? left_height+1 : right_height+1;
}
