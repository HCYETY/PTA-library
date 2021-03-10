#include <stdio.h>
int main()
{
   int   a, b, c;
   scanf("%d %d %d",&a, &b, &c);
	int max,min;
	int r, x, y;
	scanf("%d%d%d",&a,&b,&c);
	max=a>b?a:b;
	max=c>max?c:max;
	min=a<b?a:b;
	min=c<min?c:min;
	x = min;
	y = max;
	while (r=max%min)
	{
		max = min;
		min = r;
	}
	printf("%d/%d\n",x/min,y/min);
}
