/*
给定一个插入序列就可以唯一确定一棵二叉搜索树。然而，一棵给定的二叉搜索树却可以由多种不同的插入序列得到。例如分别按照序列{2, 1, 3}和{2, 3, 1}插入初始为空的二叉搜索树，都得到一样的结果。于是对于输入的各种插入序列，你需要判断它们是否能生成一样的二叉搜索树。

输入格式:
输入包含若干组测试数据。每组数据的第1行给出两个正整数N (≤10)和L，分别是每个序列插入元素的个数和需要检查的序列个数。第2行给出N个以空格分隔的正整数，作为初始插入序列。最后L行，每行给出N个插入的元素，属于L个需要检查的序列。

简单起见，我们保证每个插入序列都是1到N的一个排列。当读到N为0时，标志输入结束，这组数据不要处理。

输出格式:
对每一组需要检查的序列，如果其生成的二叉搜索树跟对应的初始序列生成的一样，输出“Yes”，否则输出“No”。

输入样例:
4 2
3 1 4 2
3 4 1 2
3 2 4 1
2 1
2 1
1 2
0
输出样例:
Yes
No
No
*/


#include <bits/stdc++.h>
using namespace std;

struct TNode
{
    int value;
    TNode *left, *right;
};

TNode *Insert_bst(TNode *root, int number) {
    if(!root) {
        root = new TNode;
        root->value = number;
        root->left = root->right = NULL;
    } else if(number < root->value) {
        root->left = Insert_bst(root->left, number);
    } else if(number > root->value) {
        root->right = Insert_bst(root->right, number);
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
    int n, l, num, flag;
    while(1) {
        cin>>n>>l;
        if(n == 0) break;
        TNode *root_1 = NULL;
        for(int i=0; i<n; i++) {
            cin>>num;
            root_1 = Insert_bst(root_1, num);
        }
        for(int i=0; i<l; i++) {
            TNode *root_2 = NULL;
            for(int j=0; j<n; j++) {
                cin>>flag;
                root_2 = Insert_bst(root_2, flag);
            }
            if(compare_bst(root_1, root_2))
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
}
