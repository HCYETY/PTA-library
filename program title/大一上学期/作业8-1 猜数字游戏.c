#include <stdio.h>
int main()
  {int number, guess, N, count;
   number > 0 && number < 100;
   count = 0;
   scanf("%d %d",&number,&N);
   
   while(1) {  /*²»Àí½â*/
   scanf("%d",&guess);
   count++;		
   		if(count>N || guess<0) {
            printf("Game Over");break;
        }
  		else if(guess==number) {
  		  if(count==1) {
  			printf("Bingo!");
		  }
		  else if(count<=3) {
		  	printf("Lucky You!");
		  }
		  else if(count>3 && count<=N) {
			printf("Good Guess!"); 
	 	  }
	 	  break; 
   		}
   		else {
   			if(guess>number) {
  	 			printf("Too big\n");
  			}
   			else {
   				printf("Too small\n");
  			}
  		}
   }
  }
