通过带空指针信息的先根序列（亦称先序序列）创建二叉树，并进行先根（先序）、中根（中序）、后根（后序）遍历。二叉树结点数据域值为不等于0的整数（可能是正数也可能是负数），空指针用0表示。

输入格式:
输入为一组用空格间隔的整数，表示带空指针信息的二叉树先根序列。其中空指针信息用0表示。二叉树结点个数不超过150000，高度不超过6000。输入数据保证二叉树各结点数据值互不相等。

输出格式:
输出为3行整数，每个整数后一个空格。第1行为该二叉树的先根序列，第2行为中根序列，第3行为后根序列。

输入样例:
1 5 8 0 0 0 6 0 0
输出样例:
1 5 8 6
8 5 1 6
8 5 6 1

#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int number;
    TreeNode* lchild, *rchild;
};

TreeNode* create_tree();
void preorder(TreeNode* tree);  //先序遍历
void inorder(TreeNode* tree);   //中序遍历
void postorder(TreeNode* tree);  //后序遍历

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

TreeNode* create_tree() {
    TreeNode* root = NULL;
    int root_number;
    if(cin>>root_number && root_number > 0) {
        root = new TreeNode();
        root->number = root_number;

        root->lchild = create_tree();  //构建左子树
        root->rchild = create_tree();  //构建右子树
    }
    return root;
}

void preorder(TreeNode* tree) {
    if(tree) {
        cout<<tree->number<<" ";
        preorder(tree->lchild);
        preorder(tree->rchild);
    }
}

void inorder(TreeNode* tree) {
    if(tree) {
        inorder(tree->lchild);
        cout<<tree->number<<" ";
        inorder(tree->rchild);
    }
}

void postorder(TreeNode* tree) {
    if(tree) {
        postorder(tree->lchild);
        postorder(tree->rchild);
        cout<<tree->number<<" ";
    }
}
