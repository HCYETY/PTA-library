
#include<stdio.h>
 
int main(void)
{
	int year;
	int i = 2001;
	scanf("%d",&year);
	if(year>2100||year<2001)
	  printf("Invalid year!");
	else
	{
		if(year<2004)printf("None");/*ÓÐÕùÒé*/ 
		for(;i<=year;i++)
		{
			if(i%4==0 && i%100!=0 || i%400==0)printf("%d\n",i);
		}
	} 
	return 0;
}

