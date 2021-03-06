给定一个顺序存储的线性表，请设计一个函数删除所有值大于min而且小于max的元素。删除后表中剩余元素保持顺序存储，并且相对位置不能改变。

函数接口定义：
int Delete( int A[], int L, int minA, int maxA );
其中A是整型数组，存储原始线性表的元素；L是表长，即A中元素的个数；minA和maxA分别为待删除元素的值域的下、上界。函数Delete应将A中所有值大于minA而且小于maxA的元素删除，同时保证表中剩余元素保持顺序存储，并且相对位置不变，最后返回删除后的表长。

裁判测试程序样例：
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

/* 你的代码将被嵌在这里 */
输入样例：
10
4 -8 2 12 1 5 9 3 3 10
0 4
输出样例：
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
