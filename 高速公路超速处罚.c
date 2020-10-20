#include<stdio.h>
int main()
  {int speed, link;
   scanf("%d %d",&speed,&link);
   if(speed<link*0.1) {
   	printf("OK")£» 
   }
   else if(speed>=link*0.1) {
   	printf("Exceed 0.1 Ticket 200");
   } 
   else if(speed>=link*0.5) {
   	printf("Exceed 0.5 License Revoked");
   }
  } 
