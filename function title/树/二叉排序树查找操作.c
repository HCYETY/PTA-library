����Ҫ��ʵ�ֶ����������Ĳ��Ҳ�����

�����ӿڶ��壺
BSTree SearchBST(BSTree T,ElemType e);

����BSTree�ṹ�������£�
typedef int ElemType;
typedef struct BSTNode
{
    ElemType data;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;

���в��Գ���������
#include <stdio.h>
#include <stdlib.h>
typedef int ElemType;
typedef struct BSTNode
{
    ElemType data;
    struct BSTNode *lchild,*rchild;
}BSTNode,*BSTree;
BSTree CreateBST();/* �����������������ɲ���ʵ�֣�ϸ�ڲ��� */
BSTree SearchBST(BSTree T,ElemType e);
void Inorder(BSTree T);/* ����������ɲ���ʵ�֣�ϸ�ڲ��� */

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
/* ��Ĵ��뽫��Ƕ������ */


����������
4
1 8 0 9
���������
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
