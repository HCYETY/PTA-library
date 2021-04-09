��Ƴ��򣬰����򴴽��������Ķ�������Ȼ����������������

�����ʽ:
����������һ�ö���������������ÿ�����ļ�ֵ���ַ���ʾ���ַ�֮�䲻���ո�ע�������ϢҲҪ�ṩ����#�ַ���ʾ������

�����ʽ:
���������������������С������в����ո񡢲���#��

��������:
abc##d##e#f##
�������:
abecdf


#include <bits/stdc++.h>
using namespace std;

struct BinTree
{
    char value;    //�ڵ��ֵ
    BinTree *lChild;  //���ӽڵ�
    BinTree *rChild;  //���ӽڵ�
    //�ڵ�Ĺ��캯��
    BinTree() : lChild(NULL), rChild(NULL) {
    }
};

BinTree *creatBinTree() {
    BinTree *root = NULL;
    char ch;
    if(cin>>ch && ch!='#') {
        root = new BinTree();
        root->value = ch;

        root->lChild = creatBinTree();
        root->rChild = creatBinTree();
    }
    return root;
}
void levelorder(BinTree *root) {
    if(root) {
        queue <BinTree*> q_queue;
        q_queue.push(root);
        while(!q_queue.empty()) {
            BinTree *node = q_queue.front();
            q_queue.pop();
            cout<<node->value;

            if(node->lChild)
                q_queue.push(node->lChild);
            if(node->rChild)
                q_queue.push(node->rChild);
        }
    }
}

int main()
{
    BinTree *root = creatBinTree();
    levelorder(root);
}
