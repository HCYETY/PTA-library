/*
ˮ�ɻ�����ָһ��Nλ��������N��3��������ÿ��λ�ϵ����ֵ�N����֮�͵���������
���磺153=1*1*1 + 5*5*5 + 3*3*3�� 
����Ҫ���д����,��������Nλˮ�ɻ�����

�����ʽ:
������һ���и���һ��������N��3��N��7����

�����ʽ:
������˳���������Nλˮ�ɻ�����ÿ������ռһ�С�

��������:3
�������:153��370��371��407
*/

/*�ⷨһ��ʹ�ÿ⺯��*/ 
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
        while(sum<=i && temp!=0){//sum>i�����ж��ˣ��ӿ�����ٶ�
            int every=1;
            int mod=temp % 10;
            for(int j=1;j<=n;j++) every*=mod;//λ����n�η�
            sum+=every;//ÿһλ���
            temp/=10;
        }
        if(sum==i){
            printf("%d\n",i);
        }
    }
    return 0;
  }
*/ 
/*�ⷨ��������͵��ú���*/
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
   max = pow(10,N); /*���Χ*/
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
