/*
水仙花数是指一个N位正整数（N≥3），它的每个位上的数字的N次幂之和等于它本身。
例如：153=1*1*1 + 5*5*5 + 3*3*3。 
本题要求编写程序,计算所有N位水仙花数。

输入格式:
输入在一行中给出一个正整数N（3≤N≤7）。

输出格式:
按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例:3
输出样例:153，370，371，407
*/

/*解法一：使用库函数*/ 
/*
#include <stdio.h>
#include <math.h>
#include <time.h>
int main()
  {int n;
   scanf("%d",&n);
	for(int i=pow(10,n-1);i<=pow(10,n)-1;i++){
        int sum=0;
        int temp=i;
        while(sum<=i && temp!=0){//sum>i不用判断了，加快程序速度
            int every=1;
            int mod=temp % 10;
            for(int j=1;j<=n;j++) every*=mod;//位数的n次方
            sum+=every;//每一位求和
            temp/=10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    return 0;
  }
*/ 
/*解法二：定义和调用函数*/
#include <stdio.h>
int pow(int remainder,int times) {
	int t = remainder
	for(int i=1;i<times;i++) {
		remainder = remainder * t;
	}
	return remainder;
}
int main()
  {int N, number, digit, sum=0, max;
   scanf("%d",&N);
   max = pow(10,N); /*最大范围*/
    for(int i=pow(10,N-1);i<max;i++) {
   		number = i;
   		while (number>0) {
  			digit = pow(number%10,N);
  			number = number / 10;
  			sum =sum + digit;
    	}
    	if (sum==i) {
   			printf ("%d\n",sum);
    	}
    }
   }  
