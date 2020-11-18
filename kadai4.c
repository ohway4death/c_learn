#include<stdio.h>

int main(void){
    int i = 0;
    double ave = 0;
    double num = 0;
    double total = 0;

    do{
        i++;
        printf("%d回目の入力\n", i);
        printf("0を入力して終了\n");
        scanf("%lf",&num);

        total += num;

        //printf("total=%lf\n",total);
        
    }while(num != 0);

    ave = total/(i-1);

    printf("平均は%.3lfです\n",ave);

    return 0;

}