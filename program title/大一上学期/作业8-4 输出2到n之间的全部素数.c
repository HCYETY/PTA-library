/*
����Ҫ�����2��n֮���ȫ��������ÿ�����10������������ֻ�ܱ�1��������������������
ע�⣺1����������2��������

�����ʽ:
������һ���и���һ�������ͷ�Χ�ڵ�������
�����ʽ:
���������ÿ����ռ6λ��ÿ�����10����������һ�������������������10����Ҳ��Ҫ���С�

��������:10
�������:     2     3     5     7
*/ 

#include<stdio.h>
int main()
  {int n, count=0, i, j;
   scanf("%d",&n);
	for(i=2; i<=n; i++) {
		for(j=2; j<=i; j++) {
			if(i%j==0)	break;
    	}
		if(j>=i) {  /*if��䲻���*/ 
			printf("%6d",i);
			count++;
			if(count%10==0)
				printf("\n");	
			}	
		}
	return 0;
  }

/*2��100������*/
#include <stdio.h>
#include <math.h>   
int main(void)
  {int count=0, m, n;    
   for(m = 2; m <= 100; m++) {
        n = sqrt(m);
        for (int i = 2; i <= n; i++) {
        	if(m % i == 0) break;
        	if(i > n){   		/* ���m������ */
       			printf("%6d", m); 
        		count++;               /* ÿ��10���Ĵ��� */
       		} 
        	if (count %10 == 0) {
	   			printf("%d",n); 
       		}
    	}
   }
  }
