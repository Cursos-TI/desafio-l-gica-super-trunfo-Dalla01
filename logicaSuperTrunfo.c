#include <stdio.h>

int main() {
    // Desafio Super Trunfo - Países
    // Tema 2 - Comparação das Cartas

    // Definição das variáveis para armazenar as propriedades das cartas
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

    int opcao; // opção do menu

    // ==============================
    // Entrada de dados da carta 1
    // ==============================
    printf("Cadastro da carta 1: \n");
    printf("Digite a letra do estado, entre A e H: \n");
    scanf(" %c", &estado1);

    printf("Digite o código da carta, por exemplo A01: \n");
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

    // Cálculos adicionais
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

    printf("Digite o código da carta, por exemplo A01: \n");
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
    // Menu de comparação
    // ==============================
    printf("=== MENU DE COMPARACAO ===\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Nome do pais (apenas exibir informacoes)\n");
    printf("2 - Populacao\n");
    printf("3 - Area\n");
    printf("4 - PIB\n");
    printf("5 - Numero de pontos turisticos\n");
    printf("6 - Densidade demografica (MENOR vence)\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // ==============================
    // Comparação usando switch
    // ==============================
    switch (opcao) {
        case 1:
            // Nome: apenas exibe, não faz comparação numérica
            printf("Você escolheu: Nome do pais\n\n");
            printf("Carta 1: %s (Estado %c, Codigo %s)\n", nome_pais1, estado1, codigo1);
            printf("Carta 2: %s (Estado %c, Codigo %s)\n", nome_pais2, estado2, codigo2);
            printf("\nNao ha comparacao numerica para nomes. Considere outro atributo se quiser decidir o vencedor.\n");
            break;

        case 2:
            // População - maior vence
            printf("Você escolheu: Populacao\n\n");
            printf("Carta 1 - %s: %d habitantes\n", nome_pais1, populacao1);
            printf("Carta 2 - %s: %d habitantes\n", nome_pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 - %s venceu!\n", nome_pais1);
            } else {
                if (populacao1 < populacao2) {
                    printf("\nResultado: Carta 2 - %s venceu!\n", nome_pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 3:
            // Área - maior vence
            printf("Você escolheu: Area\n\n");
            printf("Carta 1 - %s: %.2f km2\n", nome_pais1, area1);
            printf("Carta 2 - %s: %.2f km2\n", nome_pais2, area2);

            if (area1 > area2) {
                printf("\nResultado: Carta 1 - %s venceu!\n", nome_pais1);
            } else {
                if (area1 < area2) {
                    printf("\nResultado: Carta 2 - %s venceu!\n", nome_pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 4:
            // PIB - maior vence
            printf("Você escolheu: PIB\n\n");
            printf("Carta 1 - %s: %.2f bilhoes de reais\n", nome_pais1, PIB1);
            printf("Carta 2 - %s: %.2f bilhoes de reais\n", nome_pais2, PIB2);

            if (PIB1 > PIB2) {
                printf("\nResultado: Carta 1 - %s venceu!\n", nome_pais1);
            } else {
                if (PIB1 < PIB2) {
                    printf("\nResultado: Carta 2 - %s venceu!\n", nome_pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 5:
            // Pontos turísticos - maior vence
            printf("Você escolheu: Numero de pontos turisticos\n\n");
            printf("Carta 1 - %s: %d pontos turisticos\n", nome_pais1, pts_turisticos1);
            printf("Carta 2 - %s: %d pontos turisticos\n", nome_pais2, pts_turisticos2);

            if (pts_turisticos1 > pts_turisticos2) {
                printf("\nResultado: Carta 1 - %s venceu!\n", nome_pais1);
            } else {
                if (pts_turisticos1 < pts_turisticos2) {
                    printf("\nResultado: Carta 2 - %s venceu!\n", nome_pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        case 6:
            // Densidade demográfica - MENOR vence
            printf("Você escolheu: Densidade demografica (MENOR vence)\n\n");
            printf("Carta 1 - %s: %.2f hab/km2\n", nome_pais1, densidade1);
            printf("Carta 2 - %s: %.2f hab/km2\n", nome_pais2, densidade2);

            if (densidade1 < densidade2) {
                printf("\nResultado: Carta 1 - %s venceu!\n", nome_pais1);
            } else {
                if (densidade1 > densidade2) {
                    printf("\nResultado: Carta 2 - %s venceu!\n", nome_pais2);
                } else {
                    printf("\nResultado: Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida! Nao foi possivel realizar a comparacao.\n");
            break;
    }

    return 0;
}
