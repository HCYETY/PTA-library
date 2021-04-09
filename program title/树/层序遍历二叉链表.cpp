设计程序，按先序创建二叉树的二叉链表；然后层序遍历二叉树。

输入格式:
按先序输入一棵二叉树。二叉树中每个结点的键值用字符表示，字符之间不含空格。注意空树信息也要提供，以#字符表示空树。

输出格式:
输出层序遍历二叉树的序列。序列中不含空格、不含#。

输入样例:
abc##d##e#f##
输出样例:
abecdf


#include <bits/stdc++.h>
using namespace std;

struct BinTree
{
    char value;    //节点的值
    BinTree *lChild;  //左子节点
    BinTree *rChild;  //右子节点
    //节点的构造函数
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
