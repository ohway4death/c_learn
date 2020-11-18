#include<stdio.h>

int main(void){
    int test[5];
    int i = 0;
    int a = 0;

    printf("テストの点数を入力してください．\n");
    for(i=0;i<5;i++){
        scanf("%d",&test[i]);
    }

    for(i=0;i<5;i++){
        printf("%d番目の人の点数は%d点です．\n",i,test[i]);
        if(a < test[i]){
            a = test[i];
        }
    }

    printf("最高点は%d点です\n",a);

    return 0;
}