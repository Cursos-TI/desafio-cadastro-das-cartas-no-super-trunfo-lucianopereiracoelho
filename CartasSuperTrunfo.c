#include <stdio.h>

int main() {
    printf("Desafio cartas trunfo!\n");

    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    int pontos1, pontos2;

    printf("Estado da Carta 1: ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta 1: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade 1: ");
    scanf(" %[^\n]", cidade1);
    printf("Populacao 1: ");

    scanf("%d", &populacao1);
    printf("Area 1: ");
    scanf("%f", &area1);

    printf("Pontos Turisticos 1: ");
    scanf("%d", &pontos1);

    printf("\nEstado da Carta 2: ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta 2: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade 2: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao 2: ");
    scanf("%d", &populacao2);

    printf("Area 2: ");
    scanf("%f", &area2);
    
    printf("Pontos Turisticos 2: ");
    scanf("%d", &pontos2);

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("Pontos Turisticos: %d\n", pontos1);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("Pontos Turisticos: %d\n", pontos2);

    return 0;
}