/*简单的猜数字游戏是预先设置一个100以内的正整数作为被猜数，用户输入一个数对其进行猜测，需要你编写程序自动对其与被猜数进行比较，并输出猜测的结果。在本题中，被猜数设置为38。*/

# include<stdio.h>
int main ()
  {int i=38, a;
   0<a<100;
   scanf("%d",&a);
   if(a==i) {
   printf("Good Guess!\n");
   }
   else 
   if(a<i) {
   	printf("Too small!\n");
   }
   else
   if(a>i) {
   	printf("Too big!\n");
   }
   } 
