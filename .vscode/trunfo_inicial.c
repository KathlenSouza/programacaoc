/*Criar um programa em C que permita ao usuário inserir os dados de duas cartas do Super Trunfo. Para cada carta, o usuário deverá fornecer as seguintes informações:

Estado: char
Código da Carta:char[]  
Nome da Cidade: char[] 
População:int
Área (em km²): float 
PIB: float 
Número de Pontos Turísticos: int*/
#include <stdio.h>

char Estado1;
char CodigodaCarta1[10];
char NomedaCidade1[50];
int Populacao1;
float area1;
float pib1;
int NumPontosTuristicos1;

char Estado2;
char CodigodaCarta2[10];
char NomedaCidade2[50];
int Populacao2;
float area2;
float pib2;
int NumPontosTuristicos2;

int main() {

    printf("-----Carta 1---------\n");

    printf("Digite o Estado da carta: \n");
    scanf(" %c", &Estado1);

    printf("Digite o Código da carta: \n");
    scanf("%s", CodigodaCarta1);

    printf("Digite o Nome da Cidade da carta: \n");
    scanf(" %[^\n]", NomedaCidade1);

    printf("Digite a população da carta: \n");
    scanf("%d", &Populacao1);

    printf("Digite a area da carta: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib1);

    printf("Digite o Número de pontos turísticos da carta: \n");
    scanf("%d", &NumPontosTuristicos1);


    printf("\n-----Carta 2---------\n");

    printf("Digite o Estado da carta: \n");
    scanf(" %c", &Estado2);

    printf("Digite o Código da carta: \n");
    scanf("%s", CodigodaCarta2);

    printf("Digite o Nome da Cidade da carta: \n");
    scanf(" %[^\n]", NomedaCidade2);

    printf("Digite a população da carta: \n");
    scanf("%d", &Populacao2);

    printf("Digite a area da carta: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta: \n");
    scanf("%f", &pib2);

    printf("Digite o Número de pontos turísticos da carta: \n");
    scanf("%d", &NumPontosTuristicos2);


    printf("\n===== DADOS CADASTRADOS =====\n");

    printf("\n-----Carta 1---------\n");
    printf("Estado: %c\n", Estado1);
    printf("Código da Carta: %s\n", CodigodaCarta1);
    printf("Nome da Cidade: %s\n", NomedaCidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", NumPontosTuristicos1);

    printf("\n-----Carta 2---------\n");
    printf("Estado: %c\n", Estado2);
    printf("Código da Carta: %s\n", CodigodaCarta2);
    printf("Nome da Cidade: %s\n", NomedaCidade2);
    printf("População: %d\n", Populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", NumPontosTuristicos2);

    return 0;
    
}