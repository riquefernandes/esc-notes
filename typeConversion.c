#include <stdio.h>

int main(){

    int a = 10;
    int b = 3;
    int soma = a + b;
    int diferenca = a - b;
    int produto = a * b;
    int quociente = a / b; // Note que a divisão de números inteiros resulta em um inteiro
    
    float x = 5.5;
    float y = 2.2;
    float somaf = x + y;
    float diferencaf = x - y;
    float produtof = x * y;
    float quocientef = x / y;

    // Conversão de tipo implicito

    int ab = 10;
    float bc = 3.5;

    float resultadoi = ab + bc; // 'a' é convertido implicitamente para float

    // Conversão de tipo explicito 

    int de = 10;
    int fg = 3;

    float resultadoe = (float) a / b; // de/fg é explicitamente convertido para float

    
    

    printf("soma %d\n",soma);
    printf("diferença %d\n",diferenca);
    printf("produto %d\n",produto);
    printf("quociente %d\n",quociente);

    printf("soma %.2f\n",somaf);
    printf("diferença %.2f\n",diferencaf);
    printf("produto %.2f\n",produtof);
    printf("quociente %.2f\n",quocientef);

    printf("O resultado da conversão implicita é %.2f\n",resultadoi);
    printf("O resultado da conversão explicita do quociente é %.2f\n",resultadoe);

    





    return 0;
}
