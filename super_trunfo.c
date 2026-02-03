/*
My-first-codes-in-the-C-programming-language
Just my starting!
*/

#include <stdio.h>

int main(){

//carta 1
    char estado[50];
//Uma letra de 'A' a 'H' 
    char codigo[50];
//A letra do estado seguida de um número de 01 a 04
    char cidade[50];
//O nome da cidade
    int habitantes;
//O número de habitantes da cidade    
    float area;
//A área da cidade em quilômetros quadrados
    float pib;
//O Produto Interno Bruto da cidade
    int ponto_turistico;
//A quantidade de pontos turísticos na cidade
    float densidadePopul;
//Divide População por área
    float pibPerCapita;
//Divide PIB por população

//carta 2
    char estado1[50];
//Uma letra de 'A' a 'H' 
    char codigo1[50];
//A letra do estado seguida de um número de 01 a 04
    char cidade1[50];
//O nome da cidade
    int habitantes1;
//O número de habitantes da cidade    
    float area1;
//A área da cidade em quilômetros quadrados
    float pib1;
//O Produto Interno Bruto da cidade
    int ponto_turistico1;
//A quantidade de pontos turísticos na cidade
    float densidadePopul1;
//Divide População por área
    float pibPerCapita1;
//Divide PIB por população

/*
Após o usuário inserir os dados de cada carta, seu programa deve exibir na tela as informações cadastradas, de forma organizada e legível. Para cada carta, imprima cada informação em uma linha separada, com uma descrição clara.
*/

//Input valores da cidade 1
printf("Escreva os dados da carta 01: \n");
printf("Digite o Estado usando uma letra de A à H: ");
scanf("%s", estado);
printf("Digite o código da carta (Letra do Estado + um número de 1 à 4): ");
scanf("%s", codigo);
printf("Digite uma cidade do Estado escolhido: ");
scanf("%s", cidade);
printf("Digite o número de habitantes da cidade escolhida: ");
scanf("%d", &habitantes);
printf("Digite a área da cidade em quilômetros quadrados: ");
scanf("%f", &area);
printf("Digite o Produto Interno Bruto  da cidade: ");
scanf("%f", &pib);
printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%d", &ponto_turistico);

//Input valores da cidade 2
printf("Escreva os dados da carta 2: \n");
printf("Digite o Estado usando uma letra de A à H: ");
scanf("%s", estado1);
printf("Digite o código da carta (Letra do Estado + um número de 1 à 4): ");
scanf("%s", codigo1);
printf("Digite uma cidade do Estado escolhido: ");
scanf("%s", cidade1);
printf("Digite o número de habitantes da cidade escolhida: ");
scanf("%d", &habitantes1);
printf("Digite a área da cidade em quilômetros quadrados: ");
scanf("%f", &area1);
printf("Digite o Produto Interno Bruto  da cidade: ");
scanf("%f", &pib1);
printf("Digite a quantidade de pontos turísticos da cidade: ");
scanf("%d", &ponto_turistico1);

//Print valores da carta 1
printf("Carta 1:\n");
printf("Estado: %s\n", estado);
printf("Código: %s\n", codigo);
printf("Cidade: %s\n", cidade);
printf("População: %d\n", habitantes);
printf("Área: %.2f km²\n", area);
printf("PIB: %.2f bilhões\n", pib);
printf("Pontos Turísticos: %d\n", ponto_turistico);

densidadePopul = (float) habitantes / area;
pibPerCapita = (pib * 1000000000) / habitantes;

printf("Densidade populacional: %.2f\n", densidadePopul);
printf("PIB per capita: %.2f\n", pibPerCapita);

//Print valores da carta 2
printf("Carta 2:\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Cidade: %s\n", cidade1);
printf("População: %d\n", habitantes1);
printf("Área: %.2f km²\n", area1);
printf("PIB: %.2f bilhões\n", pib1);
printf("Pontos Turísticos: %d\n", ponto_turistico1);

densidadePopul1 = (float) habitantes1 / area1;
pibPerCapita1 = (pib1 * 1000000000) / habitantes1;

printf("Densidade populacional: %.2f\n", densidadePopul1);
printf("PIB per capita: %.2f\n", pibPerCapita1);

printf("\n");

double superPoder = ((double)habitantes + (double)area + (double)pib + (double)pibPerCapita + (double)ponto_turistico) - 
(double)densidadePopul;
double superPoder1 = ((double)habitantes1 + (double)area1 + (double)pib1 + (double)pibPerCapita1 + (double)ponto_turistico1) - (double)densidadePopul1;

printf("Super Poder da carta 1: %.2f\n", superPoder);
printf("Super Poder da carta 2: %.2f\n", superPoder1);

printf("\n");

printf("Definindo carta vencedora\n");
printf("Resultado 1 = Carta 1 vence\n");
printf("Resultado 0 = Carta 2 vence\n");

printf("\n");

printf("Comparação de cartas\n");
printf("Mais Habitantes: %d\n", habitantes > habitantes1);
printf("Maior Area: %d\n", area > area1);
printf("Maior PIB: %d\n", pib > pib1);
printf("Maior PIB Per Capita: %d\n", pibPerCapita > pibPerCapita1);
printf("Mais Pontos Turísticos: %d\n", ponto_turistico > ponto_turistico1);
printf("Menor Densidade Populacional: %d\n", densidadePopul < densidadePopul1);
printf("Maior Super Poder: %d\n", superPoder > superPoder1);

return 0;
}
