����һ��˳��洢�����Ա������һ������ɾ������ֵ����min����С��max��Ԫ�ء�ɾ�������ʣ��Ԫ�ر���˳��洢���������λ�ò��ܸı䡣

�����ӿڶ��壺
int Delete( int A[], int L, int minA, int maxA );
����A���������飬�洢ԭʼ���Ա��Ԫ�أ�L�Ǳ�����A��Ԫ�صĸ�����minA��maxA�ֱ�Ϊ��ɾ��Ԫ�ص�ֵ����¡��Ͻ硣����DeleteӦ��A������ֵ����minA����С��maxA��Ԫ��ɾ����ͬʱ��֤����ʣ��Ԫ�ر���˳��洢���������λ�ò��䣬��󷵻�ɾ����ı���

���в��Գ���������
#include <stdio.h>

#define MAXN 20

int Delete( int A[], int L, int minA, int maxA );

int main()
{
    int A[MAXN], L, minA, maxA, i;

    scanf("%d", &L);
    for (i=0; i<L; i++) scanf("%d", &A[i]);
    scanf("%d %d", &minA, &maxA);
    L = Delete(A, L, minA, maxA);
    for (i=0; i<L; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */
����������
10
4 -8 2 12 1 5 9 3 3 10
0 4
���������
4 -8 12 5 9 10


int Delete( int A[], int L, int minA, int maxA ) {
    int sign[L], length=L;
    for(int i=0, j=0; i<L; i++) {
        if(A[i]<=minA || A[i]>=maxA) {
            sign[j] = A[i];
            j++;
        } else {
            length--;
        }
    }
    for(int j=0; j<length; j++) {
        A[j] = sign[j];
    }
}
