/*
����Ҫ����ݸ�����һ�ö������ĺ�����������������������������������������

�����ʽ:
��һ�и���������N(��30)�������н��ĸ�����������У�ÿ�и���N���������ֱ��Ӧ������������������������ּ��Կո�ָ�����Ŀ��֤������ȷ��Ӧһ�ö�������

�����ʽ:
��һ�������Preorder: �Լ����������������������ּ���1���ո���ĩ�����ж���ո�

��������:
7
2 3 1 5 7 6 4
1 2 3 4 5 6 7
�������:
Preorder: 4 1 3 2 6 5 7
*/


#include <bits/stdc++.h>
using namespace std;

struct TreeNode
{
    int number;
    TreeNode *left, *right;
};

TreeNode *create_tree(int *postorder, int *inorder, int n) {
    if(n == 0)
        return NULL;

    int root_number = postorder[n-1];

    int root_pos = -1;
    for(int i=0; i<n; i++) {
        if(inorder[i] == root_number) {
            root_pos = i;
            break;
        }
    }

    if(root_pos == n) {
        cout<<"ERROR";
        exit(0);
    }
    int left_len = root_pos;
    int right_len = n - root_pos - 1;

    TreeNode *node = new TreeNode();
    node->number = root_number;
    node->left = create_tree(postorder, inorder, left_len);
    node->right = create_tree(postorder+root_pos, inorder+root_pos+1, right_len);
    return node;
}

int sign=0;
void preorderTraversal(TreeNode *root) {
    if(root) {
        if(sign != 0)
            cout<<" "<<root->number;
        else
            cout<<root->number;
        sign = 1;
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

int main()
{
    int n;
    cin>>n;
    int postorder[30];     // �������
    for(int i=0; i<n; i++)
        cin>>postorder[i];
    int inorder[30];      // �������
    for(int i=0; i<n; i++)
        cin>>inorder[i];

    TreeNode *root = create_tree(postorder, inorder, n);
    cout<<"Preorder: ";
    preorderTraversal(root);
}
