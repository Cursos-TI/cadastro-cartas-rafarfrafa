#include <stdio.h>

int main()
{
    char Estado[2], Estado2[2];
    char Codigo_da_carta[4], Codigo_da_carta2[4];
    char Nome_da_cidade[50], Nome_da_cidade2[50];
    int Populacao, Populacao2;
    float area_em_km2, area_em_km22;
    float PIB, PIB2;
    int Numero_de_Pontos_turisticos, Numero_de_Pontos_turisticos2;

    printf("Carta 1 \n");

    printf("Estado? Uma letra de A ate H: \n");
    scanf(" %c", &Estado[0]); // espaço antes de %c corrige a leitura do Enter

    printf("Codigo da Carta? \n");
    scanf("%s", Codigo_da_carta);

    printf("Nome da Cidade? \n");
    scanf("%49s", Nome_da_cidade);

    printf("População? \n");
    scanf("%d", &Populacao);

    printf("Área (em km²)? \n");
    scanf("%f", &area_em_km2);

    printf("PIB? \n");
    scanf("%f", &PIB);

    printf("Número de Pontos Turísticos? \n");
    scanf("%d", &Numero_de_Pontos_turisticos);

    printf("Carta 2 \n");

    printf("Estado? Uma letra de A ate H: \n");
    scanf(" %c", &Estado2[0]);

    printf("Codigo da carta? \n");
    scanf("%s", Codigo_da_carta2);

    printf("Nome da cidade: \n");
    scanf("%49s", Nome_da_cidade2);

    printf("População: \n");
    scanf("%d", &Populacao2);

    printf("Área: \n");
    scanf("%f", &area_em_km22);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Numero de Pontos turisticos: \n");
    scanf("%d", &Numero_de_Pontos_turisticos2);

    printf("Carta 1 \n");
    printf("Estado %s \n", Estado);
    printf("Codigo %s \n", Codigo_da_carta);
    printf("Nome da cidade %s \n", Nome_da_cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %.2f km²\n", area_em_km2);
    printf("PIB: %.2f bilhões\n", PIB);
    printf("Pontos turisticos: %d \n", Numero_de_Pontos_turisticos);

    printf("Carta 2 \n");
    printf("Estado %s \n", Estado2);
    printf("Codigo %s \n", Codigo_da_carta2);
    printf("Nome da cidade %s \n", Nome_da_cidade2);
    printf("População: %d \n", Populacao2);
    printf("Área: %.2f km²\n", area_em_km22);
    printf("PIB: %.2f bilhões\n", PIB2);
    printf("Pontos turisticos: %d \n", Numero_de_Pontos_turisticos2);

    return 0;
}
