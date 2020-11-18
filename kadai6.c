#include<stdio.h>

int main(void){
    int a = 1;
    int i = 0;
    int b = 0;

/*
    for(i=0;i<1000;a=i+a){
        b = i+a
        i = a;
        a = b;
    }
*/
    printf("%d,%d,",i,a);

    while(i+a < 1000){
        b = i+a;
        i = a;
        a = b;
        printf("%d,",b);
    }

    return 0;
}