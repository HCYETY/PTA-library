#include<stdio.h>
int main()
  {double x, y;
   char a;
   scanf("%lf%c%lf",&x,&a,&y);
   switch(a) {
		case '+':
			printf("%.2lf",x+y);break;
		case '-':
			printf("%.2lf",x-y);break;
		case '*':
			printf("%.2lf",x*y);break;
		case '/':
			if(y!=0)
			{
				printf("%.2lf",x/y);break;
			}
			else
				printf("Divisor can not be 0!");break;
		default :
			printf("Unknown operator!");break;
	}
   } 
