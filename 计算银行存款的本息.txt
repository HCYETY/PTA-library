#include <stdio.h>
#include <math.h>
int main(void){
    int money,year;
    float rate,sum;
    if (scanf("%d %d %f",&money,&year,&rate) == 3)
    {
        sum=money*pow(1+rate,year);
        printf("sum = %.2f\n",sum); 
    }

    return 0;
}