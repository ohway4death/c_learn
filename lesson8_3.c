#include<stdio.h>

int power(int x, int y);

int main(void){
    int a = 0;
    int b = 0;
    int ans = 0;

    printf("1番目の整数を入力してください．\n");
    scanf("%d",&a);

    printf("2番目の整数を入力してください．\n");
    scanf("%d",&b);

    ans = power(a, b);

    printf("%dの%d乗は%dです\n",a,b,ans);

    return 0;
}

int power(int x, int y){
    int i = 0;
    int ans = 1;

    for(i=0;i<y;i++){
        ans *= x;
    }

    return ans;
}
