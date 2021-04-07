#include<stdio.h>
int main()
  {int speed, link;
   scanf("%d %d",&speed,&link);
   double bili;
   bili = (speed - link) * 1.0 / link;
   if(speed<=link || bili<0.1) {
   	printf("OK"); 
   }
   else if(bili>=0.1 && bili<0.5) {
   	printf("Exceed %.0f%%. Ticket 200",bili*100);  /*²»Àí½â*/
   } 
   else {
   	printf("Exceed %.0f%%. License Revoked",bili*100);
   }
  } 
