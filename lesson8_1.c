#include<stdio.h>

int min(int x, int y);

int main(void){
    int a = 0;
    int b = 0;
    int ans = 0;

    printf("1番目の整数を入力してください．\n");
    scanf("%d",&a);

    printf("2番目の整数を入力してください．\n");
    scanf("%d",&b);

    ans = min(a,b);

    printf("最小値は%dです．\n",ans);

    return 0;
}

int min(int x, int y){
    if(x < y){
        return x;
    }else{
        return y;
    }
}