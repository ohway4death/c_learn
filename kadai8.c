#include<stdio.h>

int square(float a, float h){
    double ans = 0;
    ans = a * h;

    printf("計算結果は%.1lfです\n",ans);

    return 0;

}

int main(void){
    double x = 0;
    double y = 0;

    printf("底辺の長さを入力してください．\n");
    scanf("%lf",&x);

    printf("高さを入力してください．\n");
    scanf("%lf",&y);

    square(x,y);

    return 0;

}


