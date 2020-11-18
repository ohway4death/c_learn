#include<stdio.h>

int main(void){
    int i = 0;
    int j = 0;
    int step = 0;

    printf("何段？\n");
    scanf("%d", &step);

    printf("------------------\n");

    for(i=1;i<=step;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}