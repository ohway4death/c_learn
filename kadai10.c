#include<stdio.h>

int main(void){
    int money = 0;
    int yukichi = 0;
    int ichiyo = 0;
    int syuri = 0;
    int hideo = 0;
    int five_hun = 0;
    int one_hun = 0;
    int fifty = 0;
    int ten = 0;
    int five = 0;
    int one = 0;

    printf("金額入力\n");
    scanf("%d",&money);

    yukichi = money/10000;
    printf("10000円は%d枚\n",yukichi);
    money = money - (yukichi * 10000);

    ichiyo = money/5000;
    printf("5000円は%d枚\n",ichiyo);
    money = money - (ichiyo * 5000);

    syuri = money/2000;
    printf("2000円は%d枚\n",syuri);
    money = money - (syuri * 2000);

    hideo = money/1000;
    printf("1000円は%d枚\n",hideo);
    money = money - (hideo * 1000);

    five_hun = money/500;
    printf("500円は%d枚\n",five_hun);
    money = money - (five_hun * 500);

    one_hun = money/100;
    printf("100円は%d枚\n",one_hun);
    money = money - (one_hun * 100);

    fifty = money/50;
    printf("50円は%d枚\n",fifty);
    money = money - (fifty * 50);

    ten = money/10;
    printf("10円は%d枚\n",ten);
    money = money - (ten * 10);

    five = money/5;
    printf("5円は%d枚\n",five);
    money = money - (five * 5);

    one = money/1;
    printf("1円は%d枚\n",one);
    money = money - (one * 1);

    return 0;

}