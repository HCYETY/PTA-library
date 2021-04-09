/*
����һ�ö�����������������к�����������У�Ҫ�����ö������ĸ߶ȡ�

�����ʽ:
�������ȸ���������N����50����Ϊ���н�����������������Ⱥ�������������������У����ǳ���ΪN�Ĳ������ظ�Ӣ����ĸ�������Сд�����ַ�����

�����ʽ:
���Ϊһ�����������ö������ĸ߶ȡ�

��������:
9
ABDFGHIEC
FDHGIBEAC
�������:
5
*/


#include <bits/stdc++.h>
using namespace std;

struct BinTree
{
    char number;
    BinTree *left, *right;
};

BinTree *create_tree(char *preorder, char *inorder, int n) {
    if(n == 0) return NULL;

    int left_len = -1;
    for(int i=0; i<n; i++) {
        if(inorder[i] == preorder[0]) {
            left_len = i;
            break;
        }
    }
    int right_len = n - left_len - 1;

    BinTree *node = new BinTree();
    node->number = preorder[0];
    node->left = create_tree(preorder + 1, inorder, left_len);
    node->right = create_tree(preorder + left_len + 1, inorder + left_len + 1, right_len);
    return node;
}
int height(BinTree *root) {
    if(root == NULL) return 0;
    int left_height = height(root->left);
    int right_height = height(root->right);
    return left_height > right_height ? left_height+1 : right_height+1;
}

int main()
{
    int n;
    cin>>n;
    char preorder[50];
    for(int i=0; i<n; i++)
        cin>>preorder[i];
    char inorder[50];
    for(int i=0; i<n; i++)
        cin>>inorder[i];

    BinTree *root = create_tree(preorder, inorder, n);
    cout<<height(root);
}
