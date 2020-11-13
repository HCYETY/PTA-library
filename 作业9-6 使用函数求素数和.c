/*
����Ҫ��ʵ��һ���ж������ļ򵥺������Լ����øú���������������������͵ĺ�����

��������ֻ�ܱ�1��������������������ע�⣺1����������2��������

�����ӿڶ��壺
int prime( int p );
int PrimeSum( int m, int n );
���к���prime���û��������pΪ����ʱ����1�����򷵻�0��
����PrimeSum��������[m, n]�����������ĺ͡���Ŀ��֤�û�����Ĳ���m��n��
*/ 

#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;

    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    return 0;
}

int prime (int p) {
 int i;
 if(p<2) {
  return 0;
 }
 if(p==2) {
  return 1;
 }
 for(i=2;i<=sqrt(p);i++) {
  if(p%i==0) {
   return 0;
  }
 }
 return 1;
} 


int PrimeSum (int m, int n) {
 int sum=0, j;
 if(m<0) {
  m=2;
 }
 for(j=m;j<=n;j++) {
  if(prime(j)!=0) {
   sum=sum+j;
  }
 }
 return sum;
}
