#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // Primeira carta

    char estado;
    char code[10];
    char cityName[100];
    int population;
    float area;
    float pib;
    int NTPoints;

    // Segunda carta
    char estado1;
    char code1[10];
    char cityName1[100];
    int population1;
    float area1;
    float pib1;
    int NTPoints1;

    char buffer[100]; // buffer temporário para leitura e conversão

    // Entrada de dados - Carta 1
    printf("Carta 1\n");

    printf("Qual o Estado?\n");
    fgets(buffer, sizeof(buffer), stdin);
    estado = buffer[0];

    printf("Qual é o código?\n");
    fgets(code, sizeof(code), stdin);
    code[strcspn(code, "\n")] = 0; // remove o \n

    printf("Qual é o nome da cidade?\n");
    fgets(cityName, sizeof(cityName), stdin);
    cityName[strcspn(cityName, "\n")] = 0;

    printf("Qual é o tamanho da população?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &population);

    printf("Qual é a Área em KM²?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area);

    printf("Qual é o PIB?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib);

    printf("Qual é o número de pontos turísticos?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &NTPoints);

    // 1. Divida a população da cidade pela sua área

    float populationDensity = (float)population / area; // Espec "%.4f"

    // 2. Divida o PIB da cidade pela sua populaçã

    float gdpPerCapita = (pib * 1e9) / population; // se entrada for em bilhões

    // Entrada de dados - Carta 2
    printf("\nCarta 2\n");

    printf("Qual o Estado?\n");
    fgets(buffer, sizeof(buffer), stdin);
    estado1 = buffer[0];

    printf("Qual é o código?\n");
    fgets(code1, sizeof(code1), stdin);
    code1[strcspn(code1, "\n")] = 0;

    printf("Qual é o nome da cidade?\n");
    fgets(cityName1, sizeof(cityName1), stdin);
    cityName1[strcspn(cityName1, "\n")] = 0;

    printf("Qual é o tamanho da população?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &population1);

    printf("Qual é a Área em KM²?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &area1);

    printf("Qual é o PIB?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%f", &pib1);

    printf("Qual é o número de pontos turísticos?\n");
    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &NTPoints1);

    // 1. Divida a população da cidade pela sua área

    float populationDensity1 = (float)population1 / area1; // Espec "%.4f"

    // 2. Divida o PIB da cidade pela sua populaçã

    float gdpPerCapita1 = (pib1 * 1e9) / population1; // se entrada for em bilhões
    // Impressão das cartas
    printf("\n========== CARTA 1 ==========\n");
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", code);
    printf("Cidade: %s\n", cityName);
    printf("População: %d\n", population);
    printf("Área: %.2f KM²\n", area);
    printf("PIB: R$ %.2f bilhões\n", pib);
    printf("Pontos Turísticos: %d\n", NTPoints);
    printf("Densidade Populacional: %.4f\n", populationDensity);
    printf("PIB per Capita: %.2f\n", gdpPerCapita);

    printf("\n========== CARTA 2 ==========\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", code1);
    printf("Cidade: %s\n", cityName1);
    printf("População: %d\n", population1);
    printf("Área: %.2f KM²\n", area1);
    printf("PIB: R$ %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", NTPoints1);
    printf("Densidade Populacional: %.4f\n", populationDensity1);
    printf("PIB per Capita: %.2f\n", gdpPerCapita1);

    return 0;
}
