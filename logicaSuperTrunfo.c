#include <stdio.h>

int main() {
    char nomeCidade1[30], nomeCidade2[30];
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    float pontoTuristico1, pontoTuristico2;
    float Denspop1, Denspop2;
    float PIBpcap1, PIBpcap2;

    printf("Digite o nome da cidade da carta 1: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo1);
    printf("Populacao (milhões): "); scanf("%f", &populacao1);
    printf("Area (km²): "); scanf("%f", &area1);
    printf("PIB (em bilhões): "); scanf("%f", &PIB1);
    printf("Pontos Turisticos: "); scanf("%f", &pontoTuristico1);
    getchar();  // limpar buffer

    printf("\nDigite o nome da cidade da carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo2);
    printf("Populacao (milhões): "); scanf("%f", &populacao2);
    printf("Area (km²): "); scanf("%f", &area2);
    printf("PIB (em bilhões): "); scanf("%f", &PIB2);
    printf("Pontos Turisticos: "); scanf("%f", &pontoTuristico2);
    getchar();

    // Calculando Densidade e PIB per capita
    Denspop1 = populacao1/area1;
    Denspop2 = populacao2/area2;
    PIBpcap1 = (PIB1 * 1000000000) / (populacao1 );  // em milhares
    PIBpcap2 = (PIB2 * 1000000000) / (populacao2 );

    int escolha1 = 0, escolha2 = 0;
    float CARTA1_ATR1 = 0, CARTA2_ATR1 = 0;
    float CARTA1_ATR2 = 0, CARTA2_ATR2 = 0;
    float soma1, soma2;

    char* nomeAtributos[7] = {
        "", "Populacao", "Area", "PIB", "Pontos Turisticos", "Densidade Demografica", "PIB per Capita"
    };

    // Escolha do primeiro atributo
    while (escolha1 < 1 || escolha1 > 6) {
        printf("\nEscolha o primeiro atributo para a batalha:\n");
        printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
        printf("Digite o numero do atributo: ");
        scanf("%d", &escolha1);
        if (escolha1 < 1 || escolha1 > 6)
            printf("Opcao invalida! Tente novamente.\n");
    }

    switch (escolha1) {
        case 1: CARTA1_ATR1 = populacao1; CARTA2_ATR1 = populacao2; break;
        case 2: CARTA1_ATR1 = area1; CARTA2_ATR1 = area2; break;
        case 3: CARTA1_ATR1 = PIB1; CARTA2_ATR1 = PIB2; break;
        case 4: CARTA1_ATR1 = pontoTuristico1; CARTA2_ATR1 = pontoTuristico2; break;
        case 5: CARTA1_ATR1 = Denspop1; CARTA2_ATR1 = Denspop2; break;
        case 6: CARTA1_ATR1 = PIBpcap1; CARTA2_ATR1 = PIBpcap2; break;
    }

    // Escolha do segundo atributo
    while (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1) {
        printf("\nEscolha o segundo atributo para a batalha (diferente do primeiro):\n");
        switch (escolha1) {
            case 1: printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n"); break;
            case 2: printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n"); break;
            case 3: printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n"); break;
            case 4: printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Demografica\n6 - PIB per Capita\n"); break;
            case 5: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per Capita\n"); break;
            case 6: printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n"); break;
        }
        printf("Digite o numero do segundo atributo: ");
        scanf("%d", &escolha2);
        if (escolha2 == escolha1 || escolha2 < 1 || escolha2 > 6)
            printf("Opcao invalida! Tente novamente.\n");
    }

    switch (escolha2) {
        case 1: CARTA1_ATR2 = populacao1; CARTA2_ATR2 = populacao2; break;
        case 2: CARTA1_ATR2 = area1; CARTA2_ATR2 = area2; break;
        case 3: CARTA1_ATR2 = PIB1; CARTA2_ATR2 = PIB2; break;
        case 4: CARTA1_ATR2 = pontoTuristico1; CARTA2_ATR2 = pontoTuristico2; break;
        case 5: CARTA1_ATR2 = Denspop1; CARTA2_ATR2 = Denspop2; break;
        case 6: CARTA1_ATR2 = PIBpcap1; CARTA2_ATR2 = PIBpcap2; break;
    }

    printf("\nDADOS DAS CARTAS\n");
    printf("Carta 1 - Cidade: %s", nomeCidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Populacao: %.2f mi\nArea: %.2f km²\nPIB: %.2f bi\nPontos Turisticos: %.2f\nDensidade Demografica: %.2f hab/km²\nPIB per Capita: %.2f mil R$\n",
        populacao1, area1, PIB1, pontoTuristico1, Denspop1, PIBpcap1);

    printf("\nCarta 2 - Cidade: %s", nomeCidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Populacao: %.2f mi\nArea: %.2f km²\nPIB: %.2f bi\nPontos Turisticos: %.2f\nDensidade Demografica: %.2f hab/km²\nPIB per Capita: %.2f mil R$\n",
        populacao2, area2, PIB2, pontoTuristico2, Denspop2, PIBpcap2);

    soma1 = CARTA1_ATR1 + CARTA1_ATR2;
    soma2 = CARTA2_ATR1 + CARTA2_ATR2;

    printf("\nRESULTADO DA COMPARAÇÃO\n");

    // Atributo 1
    printf("Atributo 1: %s\n", nomeAtributos[escolha1]);
    printf("Carta 1: %.2f | Carta 2: %.2f => ", CARTA1_ATR1, CARTA2_ATR1);
    if (CARTA1_ATR1 > CARTA2_ATR1) {
        printf("Carta 1 venceu este atributo!\n");
    } else if (CARTA2_ATR1 > CARTA1_ATR1) {
        printf("Carta 2 venceu este atributo!\n");
    } else {
        printf("Empate neste atributo.\n");
    }

    // Atributo 2
    printf("Atributo 2: %s\n", nomeAtributos[escolha2]);
    printf("Carta 1: %.2f | Carta 2: %.2f => ", CARTA1_ATR2, CARTA2_ATR2);
    if (CARTA1_ATR2 > CARTA2_ATR2) {
        printf("Carta 1 venceu este atributo!\n");
    } else if (CARTA2_ATR2 > CARTA1_ATR2) {
        printf("Carta 2 venceu este atributo!\n");
    } else {
        printf("Empate neste atributo.\n");
    }

    printf("\nPontuação Final:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 > soma2) {
        printf("\n>>> CARTA 1 VENCEU! Cidade: %s", nomeCidade1);
    } else if (soma2 > soma1) {
        printf("\n>>> CARTA 2 VENCEU! Cidade: %s", nomeCidade2);
    } else {
        printf("\n>>> EMPATE!\n");
    }

    return 0;
}