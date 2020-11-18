#include<stdio.h>

int main(void){
    printf("数値をスペースを開けて入力してください．\n");
    printf("例：2 3 4\n");
    int a = 0;
    int b = 0;
    int c = 0;
    int total = 0;

    scanf("%d %d %d", &a, &b, &c);
    total = a+b+c;

    printf("合計は%dです\n", total);

    return 0;
}
