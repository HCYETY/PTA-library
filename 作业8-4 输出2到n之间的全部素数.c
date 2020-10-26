#include <stdio.h>
#include <math.h>   
int main(void)
  {int count, i, m, n;   
   count = 0; 
   for(m = 2; m <= 100; m++) {
        n = sqrt(m);
        for (i = 2; i <= n; i++) {
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
