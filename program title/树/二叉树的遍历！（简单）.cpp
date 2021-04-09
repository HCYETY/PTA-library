这是一道简单的二叉树问题！
我们将给出一颗二叉树，请你输出它的三种遍历，分别是先序遍历，中序遍历，后序遍历！

输入格式:
第一行给出一个正整数N（N<=100)，表示二叉树上的节点个数！
接下来N行，每行包含三个整数，i，l，r，分别代表第i个节点的左右孩子！
如果它的左/右孩子为空，则在对应位置给出-1！

题目保证1是根节点！

输出格式:
第一行输出先序遍历，第二行输出中序遍历，第三行输出后序遍历！
每行末尾无多余空格！

输入样例:
3
1 2 3
2 -1 -1
3 -1 -1
输出样例:
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

int G_yjbl = 0;
//打印结点编号。 
void print_node(NodeId number)
{
	if (G_yjbl == 0)
		cout<<number;
	else
		cout<<" "<<number;
	G_yjbl += 1;
}

//传入树/子树tree，根结点root
void preorder(TreeNode* tree, NodeId root);  //先序遍历
void inorder(TreeNode* tree, NodeId root);   //中序遍历
void postorder(TreeNode* tree, NodeId root);  //后序遍历

int main()
{
	int n;
	cin>>n;
	
	TreeNode* tree = new TreeNode[n+1];  //分配n个结点的存储空间 
	for(int i=0; i<n; i++)
	{
		int father, left, right;
		cin>>father>>left>>right;
  		tree[father].number = father;
		tree[father].left = left;  //串接左孩子
		tree[father].right = right; //串接右孩子
	}
	NodeId root = 1;  //1号结点是根节点 
	//先序遍历
	G_yjbl = 0;
	preorder(tree, 1); 
	cout<<endl;
	//中序遍历 
	G_yjbl = 0;
	inorder(tree, 1); 
	cout<<endl;
	//后序遍历
	G_yjbl = 0;
	postorder(tree, 1); 
	cout<<endl;	
}

//先序遍历
//传入树/子树tree，根结点root
void preorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	print_node(tree[root].number);
	preorder(tree, tree[root].left);
	preorder(tree, tree[root].right);
	return ;
} 


//中序遍历
//传入树/子树tree，根结点root
void inorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	inorder(tree, tree[root].left);
	print_node(tree[root].number);
	inorder(tree, tree[root].right);
	return ;
} 

//后序遍历
//传入树/子树tree，根结点root
void postorder(TreeNode* tree, NodeId root)
{
	if (root == -1)
		return ;
		
	postorder(tree, tree[root].left);
	postorder(tree, tree[root].right);
	print_node(tree[root].number);
	return ;
} 
