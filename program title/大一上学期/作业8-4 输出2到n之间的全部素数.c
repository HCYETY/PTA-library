/*
本题要求输出2到n之间的全部素数，每行输出10个。素数就是只能被1和自身整除的正整数。
注意：1不是素数，2是素数。

输入格式:
输入在一行中给出一个长整型范围内的整数。
输出格式:
输出素数，每个数占6位，每行输出10个。如果最后一行输出的素数个数不到10个，也需要换行。

输入样例:10
输出样例:     2     3     5     7
*/ 

#include<stdio.h>
int main()
  {int n, count=0, i, j;
   scanf("%d",&n);
	for(i=2; i<=n; i++) {
		for(j=2; j<=i; j++) {
			if(i%j==0)	break;
    	}
		if(j>=i) {  /*if语句不理解*/ 
			printf("%6d",i);
			count++;
			if(count%10==0)
				printf("\n");	
			}	
		}
	return 0;
  }

/*2到100的素数*/
#include <stdio.h>
#include <math.h>   
int main(void)
  {int count=0, m, n;    
   for(m = 2; m <= 100; m++) {
        n = sqrt(m);
        for (int i = 2; i <= n; i++) {
        	if(m % i == 0) break;
        	if(i > n){   		/* 如果m是素数 */
       			printf("%6d", m); 
        		count++;               /* 每行10个的处理 */
       		} 
        	if (count %10 == 0) {
	   			printf("%d",n); 
       		}
    	}
   }
  }
