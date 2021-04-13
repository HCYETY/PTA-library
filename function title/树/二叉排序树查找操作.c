本题要求实现二叉排序树的查找操作。

函数接口定义：
BSTree SearchBST(BSTree T,ElemType e);

其中BSTree结构定义如下：
typedef int ElemType;
typedef struct BSTNode
{
    ElemType data;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;

裁判测试程序样例：
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct BSTNode
{
    ElemType data;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;
BSTree CreateBST();/* 二叉排序树创建，由裁判实现，细节不表 */
BSTree SearchBST(BSTree T,ElemType e);
void Inorder(BSTree T);/* 中序遍历，由裁判实现，细节不表 */

int main()
{
    BSTree T,result;
    ElemType n,e;
    T = CreateBST();
    printf("Inorder:");    Inorder(T);    printf("\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&e);
        result = SearchBST(T,e);
        if(result) printf("%d is found\n",result->data);
        else printf("%d is not found\n",e);
    }
    return 0;
}
/* 你的代码将被嵌在这里 */


输入样例：
4
1 8 0 9
输出样例：
Inorder: 1 2 3 4 5 6 7 8
1 is found
8 is found
0 is not found
9 is not found





BSTree SearchBST(BSTree T,ElemType e) {
    while(T) {
        if(e > T->data)
            T = T->rchild;
        else if(e < T->data)
            T = T->lchild;
        else
            break;
    }
    return T;
}
