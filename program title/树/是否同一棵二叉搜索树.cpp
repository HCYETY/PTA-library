#include <bits/stdc++.h>
using namespace std;

struct TNode
{
    int value;
    TNode *left, *right;
};

TNode *Insert_bst(TNode *root, int number) {
    if(!root) {
        root = new TNode();
        root->value = number;
        root->left = root->right = NULL;
    } else if(number < root->value) {
        root->left = Insert_bst(root->left, number);
    } else if(number > root->value) {
        root->right = Insert_bst(root->right, number);
    }
    return root;
}
TNode *create_bst(TNode *root, int number[], int n) {
    for(int i=0; i<n; i++) {
        Insert_bst(root, number[i]);
    }
    return root;
}
bool compare_bst(TNode *root_1, TNode *root_2) {
    if(!root_1 && root_2) // 第1棵树是空树且第2棵树不是空树
        return false;
    else if(root_1 && !root_2) // 第1棵树不是空树且第2棵树是空树
        return false;
    else if(!root_1 && !root_2) // 第1棵树是空树且第2棵树也是空树
        return true;
    else if(root_1 && root_2) { // 第1棵树不是空树且第2棵树也不是空树
        if(root_1->value != root_2->value) // 第1棵树的根结点的键不等于第2棵树的根结点的键
            return false;
        if(compare_bst(root_1->left, root_2->left) == false)
            return false;
        if(compare_bst(root_1->right, root_2->right) == false)
            return false;
    }
    return true;
}

int main()
{
    int n, l, num[10], flag[10];
    while(1) {
        cin>>n>>l;
        if(n == 0) break;
        for(int i=0; i<n; i++)
            cin>>num[i];
        for(int i=0; i<l; i++)
            for(int j=0; j<n; j++)
                cin>>flag[j];
        TNode *root_1 = NULL;
        TNode *root_2 = NULL;
        create_bst(root_1, num, n);
        create_bst(root_2, flag, n);
        for(int i=0; i<l; i++) {
            if(compare_bst(root_1, root_2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
