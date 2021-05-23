本题要求给定二叉树的4种遍历。

函数接口定义：
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );

其中BinTree结构定义如下：
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

要求4个函数分别按照访问顺序打印出结点的内容，格式为一个空格跟着一个字符。

裁判测试程序样例：
#include <stdio.h>
#include <stdlib.h>

typedef char ElementType;
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

BinTree CreatBinTree(); /* 实现细节忽略 */
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );

int main()
{
    BinTree BT = CreatBinTree();
    printf("Inorder:");    InorderTraversal(BT);    printf("\n");
    printf("Preorder:");   PreorderTraversal(BT);   printf("\n");
    printf("Postorder:");  PostorderTraversal(BT);  printf("\n");
    printf("Levelorder:"); LevelorderTraversal(BT); printf("\n");
    return 0;
}
/* 你的代码将被嵌在这里 */





void InorderTraversal( BinTree BT ) {
    if(BT) {
        InorderTraversal(BT->Left);
        printf(" %c",BT->Data);
        InorderTraversal(BT->Right);
     }
}
void PreorderTraversal( BinTree BT ) {
    if(BT) {
        printf(" %c",BT->Data);
        PreorderTraversal(BT->Left);
        PreorderTraversal(BT->Right);
	}
}
void PostorderTraversal( BinTree BT ) {
    if(BT) {
        PostorderTraversal(BT->Left);
        PostorderTraversal(BT->Right);
        printf(" %c",BT->Data);
   }
}
void LevelorderTraversal( BinTree BT ) {
    if(!BT) return;
    BinTree a[10000];
    a[0] = BT;
    int len = 1; // len记录当前层的节点数量
    while(1) {
        if(len == 0)
            return;
        int pos = 0;
        BinTree b[10000];
        for(int i=0; i<len; i++) {
            if(a[i] != NULL)//不为空就输出
                printf(" %c",a[i]->Data);
            if(a[i]->Left!=NULL)//如果它的左节点不为空，就存到b数组里
                b[pos++] = a[i]->Left;
            if(a[i]->Right!=NULL)//如果它的右节点不为空，就存到b数组里
                b[pos++] = a[i]->Right;
        }
        len = pos;//更新下一层宽度，为下一次循环做准备
        for(int i=0; i<len; i++)//将下层的b赋给a，为下一次循环做准备
            a[i] = b[i];
    }
}
