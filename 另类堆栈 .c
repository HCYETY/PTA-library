��ջ��˳��洢ʵ���У�����һ�ַ����ǽ�Top����Ϊջ������һ��λ�á����д����ʵ�����ֶ����¶�ջ����ջ����ջ����������ж϶�ջΪ�ջ�������

�����ӿڶ��壺
bool Push( Stack S, ElementType X );
ElementType Pop( Stack S );

����Stack�ṹ�������£�
typedef int Position;
typedef struct SNode *PtrToSNode;
struct SNode {
    ElementType *Data;  /* �洢Ԫ�ص����� */
    Position Top;       /* ջ��ָ��       */
    int MaxSize;        /* ��ջ�������   */
};
typedef PtrToSNode Stack;

ע�⣺�����ջ������Push�������������Stack Full�����ҷ���false����������ǿյģ���Pop�������������Stack Empty�������ҷ���ERROR��

���в��Գ���������
#include <stdio.h>
#include <stdlib.h>

#define ERROR -1
typedef int ElementType;
typedef enum { push, pop, end } Operation;
typedef enum { false, true } bool;
typedef int Position;
typedef struct SNode *PtrToSNode;
struct SNode {
    ElementType *Data;  /* �洢Ԫ�ص����� */
    Position Top;       /* ջ��ָ��       */
    int MaxSize;        /* ��ջ�������   */
};
typedef PtrToSNode Stack;

Stack CreateStack( int MaxSize )
{
    Stack S = (Stack)malloc(sizeof(struct SNode));
    S->Data = (ElementType *)malloc(MaxSize * sizeof(ElementType));
    S->Top = 0;
    S->MaxSize = MaxSize;
    return S;
}

bool Push( Stack S, ElementType X );
ElementType Pop( Stack S );

Operation GetOp();          /* ����ʵ�֣�ϸ�ڲ��� */
void PrintStack( Stack S ); /* ����ʵ�֣�ϸ�ڲ��� */

int main()
{
    ElementType X;
    Stack S;
    int N, done = 0;

    scanf("%d", &N);
    S = CreateStack(N);
    while ( !done ) {
        switch( GetOp() ) {
        case push:
            scanf("%d", &X);
            Push(S, X);
            break;
        case pop:
            X = Pop(S);
            if ( X!=ERROR ) printf("%d is out\n", X);
            break;
        case end:
            PrintStack(S);
            done = 1;
            break;
        }
    }
    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

����������
4
Pop
Push 5
Push 4
Push 3
Pop
Pop
Push 2
Push 1
Push 0
Push 10
End
���������
Stack Empty
3 is out
4 is out
Stack Full
0 1 2 5

/* ��Ĵ��� */
bool Push( Stack S, ElementType X ) {
    if(S->Top == S->MaxSize) { //�ж�ջ�Ƿ�Ϊ��
        printf("Stack Full\n");
        return false;
    } else {
        S->Data[S->Top] = X;
        S->Top++;
    }
}

ElementType Pop( Stack S ) {
    if(S->Top == 0) { //�ж��Ƿ�Ϊ��
        printf("Stack Empty\n");
        return ERROR;
    } else {
        return S->Data[--(S->Top)]; //--ǰ����ζ���Ƚ�Top��һ��ִ�б��ʽ��ֵ
    }
}
