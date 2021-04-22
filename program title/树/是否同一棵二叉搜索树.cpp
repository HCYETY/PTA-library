/*
����һ���������оͿ���Ψһȷ��һ�ö�����������Ȼ����һ�ø����Ķ���������ȴ�����ɶ��ֲ�ͬ�Ĳ������еõ�������ֱ�������{2, 1, 3}��{2, 3, 1}�����ʼΪ�յĶ��������������õ�һ���Ľ�������Ƕ�������ĸ��ֲ������У�����Ҫ�ж������Ƿ�������һ���Ķ�����������

�����ʽ:
�������������������ݡ�ÿ�����ݵĵ�1�и�������������N (��10)��L���ֱ���ÿ�����в���Ԫ�صĸ�������Ҫ�������и�������2�и���N���Կո�ָ�������������Ϊ��ʼ�������С����L�У�ÿ�и���N�������Ԫ�أ�����L����Ҫ�������С�

����������Ǳ�֤ÿ���������ж���1��N��һ�����С�������NΪ0ʱ����־����������������ݲ�Ҫ����

�����ʽ:
��ÿһ����Ҫ�������У���������ɵĶ�������������Ӧ�ĳ�ʼ�������ɵ�һ���������Yes�������������No����

��������:
4 2
3 1 4 2
3 4 1 2
3 2 4 1
2 1
2 1
1 2
0
�������:
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
    if(!root_1 && root_2) // ��1�����ǿ����ҵ�2�������ǿ���
        return false;
    else if(root_1 && !root_2) // ��1�������ǿ����ҵ�2�����ǿ���
        return false;
    else if(!root_1 && !root_2) // ��1�����ǿ����ҵ�2����Ҳ�ǿ���
        return true;
    else if(root_1 && root_2) { // ��1�������ǿ����ҵ�2����Ҳ���ǿ���
        if(root_1->value != root_2->value) // ��1�����ĸ����ļ������ڵ�2�����ĸ����ļ�
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
