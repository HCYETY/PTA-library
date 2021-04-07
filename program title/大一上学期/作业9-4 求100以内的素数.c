#include <stdio.h>
int prime(int m);
int main()
  {int m, count=0;
   scanf("%d",&m);
   for(m=2;m<=100;m++) {
   if(prime(m)) {
       printf("%6d",m);
       count++;
       if(count%10==0) {
            printf("\n");
       }
   }
   }
   return 0;
  }
int prime(int m) {
    int i;
	for(i=2;i<=sqrt(m);i++){ //iµÄ·¶Î§£¡
			if(m%i==0){
			    return 0;
			}  
	}      
	return 1; 
}
