#include <stdio.h>

int main(){

    int num;

    printf("Digite um número\n");
    scanf("%i", &num);

    if(num % 2 == 0){
        printf("O número fornecido é par\n");
    }

    else{
        printf("O número fornecido é impar\n");
    }





    return 0;
}