#include<stdio.h>

int main(void){
    int a = 0;
    int i = 0;
    int check = 0;
    
    printf("整数を入力してください．\n");
    scanf("%d",&a);
    
    printf("判定1：");
    if(a == 0){
        printf("ZERO\n");
    }else if(a > 0){
        printf("正の整数\n");
    }else{
        printf("負の整数\n");
    }

    printf("判定2：");
    if (a == 0){
        printf("------");
    }else if(a%2 == 0){
        printf("偶数\n");
    }else{
        printf("奇数\n");
    }

    printf("判定3：");
    if (a%2 == 0 && a != 2){
        printf("素数ではない\n");
    }else if(a == 2){
        check = 0;
    }else{
        for(i=2;i<a-1;a++){
            if (a%i == 0){
                check++;
            }
        }
    }
    if (check != 0){
        printf("素数ではない\n");
    }else{
        printf("素数である\n");
    }

    return 0;

}
    


    
    

    
