#include<stdio.h>

void swap(int *pX, int *pY);

int main(void){
    int num1 = 5;
    int num2 =10;

    printf("変数num1の値は%dです.\n",num1);
    printf("変数num2の値は%dです.\n",num2);
    printf("変数num1の変数num2の値を交換します．\n");

    swap(&num1, &num2);
    printf("変数num1の値は%dです.\n",num1);
    printf("変数num2の値は%dです.\n",num2);

    return 0;

}

void swap(int *pX, int *pY){
    int tmp;

    tmp = *pX;
    *pX = *pY;
    *pY = tmp;
}