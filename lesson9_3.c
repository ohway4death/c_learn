#include<stdio.h>

void add(int *pX, int *pY, int z);

int main(void){
    int a, b;
    int score;

    printf("2科目分の点数を入力してください．\n");
    scanf("%d %d",&a,&b);

    printf("加算する点数を入力してください．\n");
    scanf("%d",&score);

    add(&a, &b,score);

    printf("%d点加算しましたので\n",score);
    printf("科目1は%d点となりました．\n",a);
    printf("科目2は%d点となりました．\n",b);

    return 0;
}

void add(int *pX, int *pY, int z){
    *pX += z;
    *pY += z;
}