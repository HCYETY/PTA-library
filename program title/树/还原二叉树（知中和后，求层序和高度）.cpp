/*
给出一颗二叉树的中序遍历和后序遍历，请你实现以下两个需求：
（1）请你输出这颗二叉树的层序遍历。
（2）请你输出这颗二叉树的树高。

输入格式:
第一行包含一个整数N（N<=1000）。二叉树的节点将从1到N编号。
第二行包含N个节点编号，表示这颗二叉树的中序遍历。
第三行包含N个节点编号，表示这颗二叉树的后序遍历。

输出格式:
第一行输出二叉树的层序遍历，节点编号之间用空格分隔，末尾没有多余空格。
第二行输出一个整数，代表二叉树的树高。

题目不保证输入的序列合法，如果遇到不合法的情况，请在一行中输出"ERROR"，直接退出程序。

输入样例:
6
6 5 4 3 2 1
5 6 2 3 1 4
输出样例:
4 6 1 5 3 2
4

输入样例:
3
2 1 3
3 2 1
输出样例:
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

//据中序序列inorder和后序序列postorder，生成二叉树 
TreeNode* create_tree(int* inorder, int* postorder, int len);
//层序遍历 
void levelorder(TreeNode* root);
//计算树的高度
int height(TreeNode* root);

int main()
{
	int n;
	cin>>n;
	
	int inorder[n]; // 中序遍历
	for (int i=0; i<n; i++)
		cin>>inorder[i];
	int postorder[n]; // 后序遍历
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
	//找到根结点的编号
	int root_number = postorder[len-1];
	
	//在中序序列中搜索根结点的位置
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
	int left_len = root_pos;  //左子树的结点数目
	int right_len = len - root_pos - 1;  //右子树的结点数目 
	
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
