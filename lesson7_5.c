#include<stdio.h>

int main(void){
    char str[100];
    int a = 0;
    int i = 0;

    printf("文字列を入力してください.\n");
    scanf("%s",str);

    for(i=0;str[i]!='\0';i++){
        if(str[i] == 'a'){
            str[i] = 'b';
        }
    }

    printf("%sに置き換えました.\n",str);

    return 0;
}