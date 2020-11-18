#include<stdio.h>

int main(void){
    char str[100];
    int i = 0;
    int a = 0;

    printf("文字列を入力してください．\n");
    scanf("%s",str);

    while(str[a] != '\0'){
        a++;
    }

    printf("文字列の長さは%dです\n",a);

    return 0;

}