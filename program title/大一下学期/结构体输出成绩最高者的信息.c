#include <stdio.h>
struct student{
    char name[10];
    float passage;
};
int main()
{
    struct student add[5];//定义结构体变量
    int i, max=0;
    for(i=0; i<5; i++) {
        scanf("%s %f\n",&add[i].name, &add[i].passage);
        if(add[i].passage > add[max].passage) {
            max = i;
        }
    }
    printf("name = %s, score = %.1f", add[max].name,add[max].passage);
}
