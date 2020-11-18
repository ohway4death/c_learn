#include<stdio.h>

#define SQUARE(x) (x*x)

int main(void){
    int a = 0;
    
    printf("整数を入力してください．\n");
    scanf("%d",&a);

    printf("%dの2乗は%dです.\n",a,SQUARE(a));

    return 0;

}