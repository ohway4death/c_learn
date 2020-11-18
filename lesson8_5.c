#include<stdio.h>
#include "power.h"

int main(void){
    int a = 0;
    int b = 0;

    printf("1番目の整数を入力してください\n");
    scanf("%d",&a);

    printf("2番目の整数を入力してください\n");
    scanf("%d",&b);

    printf("%dの%d乗は%dです．\n",a,b,power(a,b));

    return 0;

}