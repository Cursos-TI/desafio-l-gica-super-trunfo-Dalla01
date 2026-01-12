#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Cadastro das Cartas:
    //Carta 01
    char estado1;
    char codigo1[4];
    char nome_cidade1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pts_turisticos1;
    float densidade1;
    float pib_per_capta1;
    long double inverso_densidade1;
    long double super_poder1;

    //Carta 02
    char estado2;
    char codigo2[4];
    char nome_cidade2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pts_turisticos2;
    float densidade2;
    float pib_per_capta2;
    long double inverso_densidade2;
    long double super_poder2;

    // Área para entrada de dados
    // Entrada de dados da carta 1
    printf("Cadastro da carta 1: \n");
    printf("Digite a letra do estado, entre A e H: \n");
    scanf(" %c", &estado1);
    printf("Digite o código da carta, por exemplo A01: \n");
    scanf("%s", codigo1);
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nome_cidade1);
    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao1);
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB1);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pts_turisticos1);
    // Aqui eu coloquei as operações após captaçao dos valores (entrada pelo usuário), fiz o mesmo para a carta 2.
    // Os camentarios daqui também servem para a carta 2
    densidade1 = ((float)populacao1/area1);
    pib_per_capta1 = (PIB1 * 1000000000/populacao1); // Usei o valor 1000000000 para converter o valores para escala de bilhão
    inverso_densidade1 = 1/densidade1; // como o melhor é ter menor densidade, calculei o valor inverso
    super_poder1 = (populacao1 + area1 + PIB1 + pts_turisticos1 + pib_per_capta1 + inverso_densidade1);

    printf(" \n");

    // Entrada de dados da carta 2
    printf("Cadastro da carta 2: \n");
    printf("Digite a letra do estado, entre A e H: \n");
    scanf(" %c", &estado2);
    printf("Digite o código da carta, por exemplo A01: \n");
    scanf("%s", codigo2);
    printf("Digite o nome da cidade: \n");
    scanf(" %49[^\n]", nome_cidade2);
    printf("Digite o tamanho da população: \n");
    scanf("%d", &populacao2);
    printf("Digite o tamanho da área da cidade: \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade em bilhões de reais: \n");
    scanf("%f", &PIB2);
    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &pts_turisticos2);
    densidade2 = ((float)populacao2/area2);
    pib_per_capta2 = (PIB2 * 1000000000/populacao2);
    inverso_densidade2 = 1/densidade2;
    super_poder2 = (populacao2 + area2 + PIB2 + pts_turisticos2 + pib_per_capta2 + inverso_densidade2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    if (populacao1 > populacao2) {
        printf("Carta 1 - %s: %d.\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %d.\n", nome_cidade2, populacao2);
        printf("Carta 1 - %s, venceu!", nome_cidade1);
    } else {
        printf("Carta 1 - %s: %d.\n", nome_cidade1, populacao1);
        printf("Carta 2 - %s: %d.\n", nome_cidade2, populacao2);
        printf("Carta 2 - %s, venceu!", nome_cidade2);;
    }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
