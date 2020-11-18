#include<stdio.h>

int main(void){
    int a = 0;
    int total = 0;
    printf("整数を入力してください\n");
    while(total<100){
        scanf("%d",&a);
        total = total + a;
    }

    printf("合計は%d\n",total);

    return 0;
}