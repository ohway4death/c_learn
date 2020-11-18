#include<stdio.h>

#define PAI 3.14

int main(void){
    double r = 0;
    float ensyu = 0;
    float square = 0;

    printf("半径を入力してください．\n");
    scanf("%lf",&r);

    ensyu = 2 * PAI * r;
    square = PAI * r * r;

    printf("円周=%2.2lf\n", ensyu);
    printf("面積=%2.2lf\n", square);

    return 0;
    
}