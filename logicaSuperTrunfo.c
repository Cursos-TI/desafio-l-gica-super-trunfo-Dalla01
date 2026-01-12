#include <stdio.h>
#include <string.h>

int main() {
    // Desafio Super Trunfo - Países
    // Versão: comparação com dois atributos

    // Carta 01
    char estado1;
    char codigo1[4];
    char nome_pais1[50];
    int populacao1;
    float area1;
    float PIB1;
    int pts_turisticos1;
    float densidade1;
    float pib_per_capta1;
    long double inverso_densidade1;
    long double super_poder1;

    // Carta 02
    char estado2;
    char codigo2[4];
    char nome_pais2[50];
    int populacao2;
    float area2;
    float PIB2;
    int pts_turisticos2;
    float densidade2;
    float pib_per_capta2;
    long double inverso_densidade2;
    long double super_poder2;

    int opcao1, opcao2;

    // ==============================
    // Entrada de dados da carta 1
    // ==============================
    printf("Cadastro da carta 1: \n");
    printf("Digite a letra do estado, entre A e H: \n");
    scanf(" %c", &estado1);

    printf("Digite o codigo da carta, por exemplo A01: \n");
    scanf("%s", codigo1);

    printf("Digite o nome do pais: \n");
    scanf(" %49[^\n]", nome_pais1);

    printf("Digite a populacao do pais: \n");
    scanf("%d", &populacao1);

    printf("Digite a area do pais (em km2): \n");
    scanf("%f", &area1);

    printf("Digite o PIB do pais em bilhoes de reais: \n");
    scanf("%f", &PIB1);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pts_turisticos1);

    densidade1 = (float) populacao1 / area1;
    pib_per_capta1 = (PIB1 * 1000000000 / populacao1);
    inverso_densidade1 = 1 / densidade1;
    super_poder1 = (populacao1 + area1 + PIB1 + pts_turisticos1 + pib_per_capta1 + inverso_densidade1);

    printf("\n");

    // ==============================
    // Entrada de dados da carta 2
    // ==============================
    printf("Cadastro da carta 2: \n");
    printf("Digite a letra do estado, entre A e H: \n");
    scanf(" %c", &estado2);

    printf("Digite o codigo da carta, por exemplo A01: \n");
    scanf("%s", codigo2);

    printf("Digite o nome do pais: \n");
    scanf(" %49[^\n]", nome_pais2);

    printf("Digite a populacao do pais: \n");
    scanf("%d", &populacao2);

    printf("Digite a area do pais (em km2): \n");
    scanf("%f", &area2);

    printf("Digite o PIB do pais em bilhoes de reais: \n");
    scanf("%f", &PIB2);

    printf("Digite o numero de pontos turisticos: \n");
    scanf("%d", &pts_turisticos2);

    densidade2 = (float) populacao2 / area2;
    pib_per_capta2 = (PIB2 * 1000000000 / populacao2);
    inverso_densidade2 = 1 / densidade2;
    super_poder2 = (populacao2 + area2 + PIB2 + pts_turisticos2 + pib_per_capta2 + inverso_densidade2);

    printf("\n");

    // ==============================
    // Menu para escolha do primeiro atributo
    // ==============================
    printf("=== MENU - PRIMEIRO ATRIBUTO ===\n");
    printf("Escolha o primeiro atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Numero de pontos turisticos\n");
    printf("5 - Densidade demografica (MENOR vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao1);

    // Validação simples da primeira opcao
    while (opcao1 < 1 || opcao1 > 5) {
        printf("Opcao invalida. Digite novamente (1 a 5): ");
        scanf("%d", &opcao1);
    }

    printf("\n");

    // ==============================
    // Menu dinâmico para o segundo atributo
    // ==============================
    printf("=== MENU - SEGUNDO ATRIBUTO ===\n");
    printf("Escolha o segundo atributo (diferente do primeiro):\n");

    // Menu dinâmico usando switch (não mostra o atributo já escolhido)
    switch (opcao1) {
        case 1: // já escolheu População
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade demografica (MENOR vence)\n");
            break;
        case 2: // já escolheu Área
            printf("1 - Populacao\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade demografica (MENOR vence)\n");
            break;
        case 3: // já escolheu PIB
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("4 - Numero de pontos turisticos\n");
            printf("5 - Densidade demografica (MENOR vence)\n");
            break;
        case 4: // já escolheu Pontos turísticos
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("5 - Densidade demografica (MENOR vence)\n");
            break;
        case 5: // já escolheu Densidade
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Numero de pontos turisticos\n");
            break;
    }

    printf("Opcao: ");
    scanf("%d", &opcao2);

    // Garante que a segunda opcao é diferente da primeira e válida
    while (opcao2 < 1 || opcao2 > 5 || opcao2 == opcao1) {
        printf("Opcao invalida. Escolha um atributo diferente do primeiro (1 a 5): ");
        scanf("%d", &opcao2);
    }

    // ==============================
    // Preparar valores dos atributos
    // ==============================
    float valor1_c1, valor1_c2; // atributos da primeira escolha
    float valor2_c1, valor2_c2; // atributos da segunda escolha
    char nome_attr1[30];
    char nome_attr2[30];

    // Primeiro atributo
    switch (opcao1) {
        case 1:
            valor1_c1 = (float) populacao1;
            valor1_c2 = (float) populacao2;
            strcpy(nome_attr1, "Populacao");
            break;
        case 2:
            valor1_c1 = area1;
            valor1_c2 = area2;
            strcpy(nome_attr1, "Area");
            break;
        case 3:
            valor1_c1 = PIB1;
            valor1_c2 = PIB2;
            strcpy(nome_attr1, "PIB");
            break;
        case 4:
            valor1_c1 = (float) pts_turisticos1;
            valor1_c2 = (float) pts_turisticos2;
            strcpy(nome_attr1, "Pontos turisticos");
            break;
        case 5:
            valor1_c1 = densidade1;
            valor1_c2 = densidade2;
            strcpy(nome_attr1, "Densidade demografica");
            break;
    }

    // Segundo atributo
    switch (opcao2) {
        case 1:
            valor2_c1 = (float) populacao1;
            valor2_c2 = (float) populacao2;
            strcpy(nome_attr2, "Populacao");
            break;
        case 2:
            valor2_c1 = area1;
            valor2_c2 = area2;
            strcpy(nome_attr2, "Area");
            break;
        case 3:
            valor2_c1 = PIB1;
            valor2_c2 = PIB2;
            strcpy(nome_attr2, "PIB");
            break;
        case 4:
            valor2_c1 = (float) pts_turisticos1;
            valor2_c2 = (float) pts_turisticos2;
            strcpy(nome_attr2, "Pontos turisticos");
            break;
        case 5:
            valor2_c1 = densidade1;
            valor2_c2 = densidade2;
            strcpy(nome_attr2, "Densidade demografica");
            break;
    }

    // ==============================
    // Comparação individual dos atributos
    // usando operador ternário
    // ==============================
    int resultado_attr1; // 1 = carta1, 2 = carta2, 0 = empate
    int resultado_attr2;

    // Primeiro atributo
    if (opcao1 == 5) {
        // Densidade: menor vence
        resultado_attr1 = (valor1_c1 < valor1_c2) ? 1 :
                          (valor1_c1 > valor1_c2) ? 2 : 0;
    } else {
        // Demais atributos: maior vence
        resultado_attr1 = (valor1_c1 > valor1_c2) ? 1 :
                          (valor1_c1 < valor1_c2) ? 2 : 0;
    }

    // Segundo atributo
    if (opcao2 == 5) {
        // Densidade: menor vence
        resultado_attr2 = (valor2_c1 < valor2_c2) ? 1 :
                          (valor2_c1 > valor2_c2) ? 2 : 0;
    } else {
        // Demais atributos: maior vence
        resultado_attr2 = (valor2_c1 > valor2_c2) ? 1 :
                          (valor2_c1 < valor2_c2) ? 2 : 0;
    }

    // ==============================
    // Exibição dos resultados por atributo
    // ==============================
    printf("\n=== RESULTADOS POR ATRIBUTO ===\n");

    // Atributo 1
    printf("\nAtributo 1: %s\n", nome_attr1);
    printf("%s: %.2f\n", nome_pais1, valor1_c1);
    printf("%s: %.2f\n", nome_pais2, valor1_c2);
    if (opcao1 == 5) {
        printf("Regra: menor valor vence.\n");
    } else {
        printf("Regra: maior valor vence.\n");
    }

    if (resultado_attr1 == 1) {
        printf("Vencedora neste atributo: %s\n", nome_pais1);
    } else if (resultado_attr1 == 2) {
        printf("Vencedora neste atributo: %s\n", nome_pais2);
    } else {
        printf("Empate neste atributo.\n");
    }

    // Atributo 2
    printf("\nAtributo 2: %s\n", nome_attr2);
    printf("%s: %.2f\n", nome_pais1, valor2_c1);
    printf("%s: %.2f\n", nome_pais2, valor2_c2);
    if (opcao2 == 5) {
        printf("Regra: menor valor vence.\n");
    } else {
        printf("Regra: maior valor vence.\n");
    }

    if (resultado_attr2 == 1) {
        printf("Vencedora neste atributo: %s\n", nome_pais1);
    } else if (resultado_attr2 == 2) {
        printf("Vencedora neste atributo: %s\n", nome_pais2);
    } else {
        printf("Empate neste atributo.\n");
    }

    // ==============================
    // Soma dos atributos e resultado final
    // ==============================
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    printf("\n=== SOMA DOS ATRIBUTOS ===\n");
    printf("Atributos usados: %s e %s\n", nome_attr1, nome_attr2);
    printf("%s - Soma: %.2f\n", nome_pais1, soma1);
    printf("%s - Soma: %.2f\n", nome_pais2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado final: %s venceu a rodada!\n", nome_pais1);
    } else if (soma2 > soma1) {
        printf("\nResultado final: %s venceu a rodada!\n", nome_pais2);
    } else {
        printf("\nResultado final: Empate!\n");
    }

    return 0;
}
