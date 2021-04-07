#include<stdio.h>
int main()
  {int x, y;
   float price;
   printf("[1] crisps\n");
   printf("[2] popcorn\n");
   printf("[3] chocolate\n");
   printf("[4] cola\n");
   printf("[0] exit\n");
    for(x=1;x<=5;x++) {
   	scanf("%d",&y);
   	if(y==0) break;
   	switch(y){
   	   case 1:price = 3.0;break;
       case 2:price = 2.5;break;
       case 3:price = 4.0;break;
       case 4:price = 3.5;break;
       default:price = 0.0;break;
	   }
	   printf("price = %.1f\n",price);
   }
   printf("Thanks\n");
  }
