#include <stdio.h>


int main(){

   float pibBilhoes = 699.28;

    float pib = pibBilhoes * 1000000000;
    int population = 12325000;



    float gdpPerCapita = (float) pib / population;
 

    printf("%.2f\n",gdpPerCapita);




    return 0;
}