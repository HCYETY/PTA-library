#include <stdio.h>
#include <math.h>
int main()
{
    float a,x;
    scanf("%f",&x);
    if(x<0)																									
    {
        a=pow((x+1),2)+2*x+1/x;
        printf("f(%.2f) = %.2f",x,a);
    }
    else if(x>=0)
    {
        a=sqrt(x);
        printf("f(%.2f) = %.2f",x,a);
    }
}