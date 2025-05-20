
#include <stdio.h>

int main() {
    // DECLARANDO AS VARIÁVEIS
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoTuristico1, pontoTuristico2;
    float Denspop1, Denspop2;
    float PIBpcap1, PIBpcap2;
    int escolha;

    // INFORMAÇÕES DA CARTA 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("Area (em km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &PIB1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontoTuristico1);

    PIBpcap1 = (PIB1 * 1000000000) / populacao1;
    Denspop1 = populacao1 / area1;

    // INFORMAÇÕES DA CARTA 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    getchar(); // limpa o buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("Area (em km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf(" %f", &PIB2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontoTuristico2);

    PIBpcap2 = (PIB2 * 1000000000) / populacao2;
    Denspop2 = populacao2 / area2;

    // INFORMAÇÕES DAS CARTAS
    printf("\n CARTA 1 \n");
    printf("Cidade: %s", nomeCidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Demografica: %.2f hab/km2\n", Denspop1);
    printf("PIB per Capita: %.2f reais\n", PIBpcap1);

    printf("\n CARTA 2 \n");
    printf("Cidade: %s", nomeCidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Demografica: %.2f hab/km2\n", Denspop2);
    printf("PIB per Capita: %.2f reais\n", PIBpcap2);

    // MENU
    printf("\nEscolha o atributo para batalha:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite o numero do atributo: ");
    scanf("%d", &escolha);

    // RESULTADO
    printf("\n RESULTADO DA COMPARAÇÃO \n");
    printf("Carta 1 - Cidade: %s", nomeCidade1);
    printf("Carta 2 - Cidade: %s", nomeCidade2);

    switch (escolha) {
        case 1:
            printf("Atributo Comparado: Populacao\n");
            printf("Carta 1: %d habitantes\n", populacao1);
            printf("Carta 2: %d habitantes\n", populacao2);
            if (populacao1 > populacao2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (populacao2 > populacao1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 2:
            printf("Atributo Comparado: Area\n");
            printf("Carta 1: %.2f km2\n", area1);
            printf("Carta 2: %.2f km2\n", area2);
            if (area1 > area2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (area2 > area1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 3:
            printf("Atributo Comparado: PIB\n");
            printf("Carta 1: %.2f bilhoes\n", PIB1);
            printf("Carta 2: %.2f bilhoes\n", PIB2);
            if (PIB1 > PIB2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (PIB2 > PIB1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 4:
            printf("Atributo Comparado: Pontos Turisticos\n");
            printf("Carta 1: %d\n", pontoTuristico1);
            printf("Carta 2: %d\n", pontoTuristico2);
            if (pontoTuristico1 > pontoTuristico2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (pontoTuristico2 > pontoTuristico1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 5:
            printf("Atributo Comparado: Densidade Demografica\n");
            printf("Carta 1: %.2f hab/km2\n", Denspop1);
            printf("Carta 2: %.2f hab/km2\n", Denspop2);
            if (Denspop1 < Denspop2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (Denspop2 < Denspop1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        case 6:
            printf("Atributo Comparado: PIB per Capita\n");
            printf("Carta 1: %.2f reais\n", PIBpcap1);
            printf("Carta 2: %.2f reais\n", PIBpcap2);
            if (PIBpcap1 > PIBpcap2)
                printf("VENCEDOR: Carta 1 - %s", nomeCidade1);
            else if (PIBpcap2 > PIBpcap1)
                printf("VENCEDOR: Carta 2 - %s", nomeCidade2);
            else
                printf("Empate!\n");
            break;
        default:
            printf("Escolha inválida.\n");
    }

    return 0;
}
