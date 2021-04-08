/*
设计程序，按先序创建二叉树的二叉链表；然后层序遍历二叉树。

输入格式:
按先序输入一棵二叉树。二叉树中每个结点的键值用字符表示，字符之间不含空格。注意空树信息也要提供，以#字符表示空树。
输出格式:
输出层序遍历二叉树的序列。序列中不含空格、不含#。

输入样例:
abc##d##e#f##
输出样例:
abecdf
*/


#include <bitd/stdc++.h>
using namespace std;

struct TreeNode {
	int number;
	TreeNode *left, *right;
};

TreeNode *create_tree();
void cengxupailie(TreeNode *tree);

int main()
{
	TreeNode* root = create_tree();
	
	
}
