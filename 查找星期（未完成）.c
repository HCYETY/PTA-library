#include <stdio.h>
int main()
  {char n;
   char [][n] = {"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
   scanf("%s",&n);
   switch(n) {
   	case Sunday:printf("0\n");
   	case Monday:printf("1\n");
   	case Tuesday:printf("2\n");
   	case Wednesday:printf("3\n");
   	case Thursday:printf("4\n");
   	case Friday:printf("5\n");
   	case Saturday:printf("6\n");
   }
   if ( n==-1 ) printf("wrong input!\n");
   else printf("%d\n", n);
   return 0;
}
