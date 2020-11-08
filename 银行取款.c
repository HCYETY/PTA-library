# include<stdio.h> 
float cash;		/* 定义全局变量，保存现金余额 */
void income (float number), expend(float number);	/* 函数声明  */
int main (void) 
  {int choice;
   float value;	
   cash = 0;		/* 初始金额=0 */
   printf ("Enter operate choice(0--end, 1--income, 2--expend):");
   scanf ("%d", &choice);		/* 输入操作类型 */
   while(choice != 0) {	/*  若输入类型为0，循环结束  */

	    if(choice == 1 || choice == 2) {
			printf ("Enter cash value:"); 	/* 输入操作现金额 */
			scanf ("%f", &value); 
			if (choice == 1) income(value);    /* 函数调用，计算现金收入 */
			else expend(value);	 /* 函数调用，计算现金支出 */
		printf ("current cash:%.2f\n", cash);
	    }
	    
	       		if(value<0) {
   			printf("error\n",cash);continue; 
		   }
	    printf ("Enter operate choice(0--end, 1--income, 2--expend):");
	    scanf ("%d", &choice);		/* 继续输入操作类型 */
	    if(choice<0) {
	    	printf("输入错误，请重新输入："); 
		} 
	printf("error");
   }
   return 0;
}
	/* 定义计算现金收入函数 */
void income(float number){
	if(number>0) {
		cash = cash + number;	/*  改变全局变量cash  */
	}
}
	/* 定义计算现金支出函数 */
void expend(float number){
	if(cash-number>0) {
	    cash = cash - number;	/*  改变全局变量cash  */	
	}
}


