#include<stdio.h>
int main()
  {int x, y;
   float price;
   for(x=1;x<=5;x++) {
   printf("[1] crisps\n");
   printf("[2] popcorn\n");
   printf("[3] chocolate\n");
   printf("[4] cola\n");
   printf("[0] exit\n");
   printf("Enter y:");
   	scanf("%d",&y);
   	if(y==0) break;
   	switch(y){
   	   case 1:
           printf("price = 3.0");break;
       case 2:
           printf("price = 2.5");break;
       case 3:
           printf("price = 4.4");break;
       case 4:
           printf("price = 3.5");break;
       default:
           printf("price = 0.0");break;
	   }
	   printf("price = %.1f\n",price);
   }
   printf("Thanks\n");
  }
