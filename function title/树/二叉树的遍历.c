����Ҫ�������������4�ֱ�����

�����ӿڶ��壺
void InorderTraversal( BinTree BT );
void PreorderTraversal( BinTree BT );
void PostorderTraversal( BinTree BT );
void LevelorderTraversal( BinTree BT );

����BinTree�ṹ�������£�
typedef struct TNode *Position;
typedef Position BinTree;
struct TNode{
    ElementType Data;
    BinTree Left;
    BinTree Right;
};

Ҫ��4�������ֱ��շ���˳���ӡ���������ݣ���ʽΪһ���ո����һ���ַ���

���в��Գ���������
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

BinTree CreatBinTree(); /* ʵ��ϸ�ں��� */
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
/* ��Ĵ��뽫��Ƕ������ */





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
    int len = 1; // len��¼��ǰ��Ľڵ�����
    while(1) {
        if(len == 0)
            return;
        int pos = 0;
        BinTree b[10000];
        for(int i=0; i<len; i++) {
            if(a[i] != NULL)//��Ϊ�վ����
                printf(" %c",a[i]->Data);
            if(a[i]->Left!=NULL)//���������ڵ㲻Ϊ�գ��ʹ浽b������
                b[pos++] = a[i]->Left;
            if(a[i]->Right!=NULL)//��������ҽڵ㲻Ϊ�գ��ʹ浽b������
                b[pos++] = a[i]->Right;
        }
        len = pos;//������һ���ȣ�Ϊ��һ��ѭ����׼��
        for(int i=0; i<len; i++)//���²��b����a��Ϊ��һ��ѭ����׼��
            a[i] = b[i];
    }
}
