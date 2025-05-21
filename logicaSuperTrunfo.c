
#include <stdio.h>

int main() {
    char nomeCidade1[30], nomeCidade2[30];
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    float populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoTuristico1, pontoTuristico2;
    float Denspop1, Denspop2;
    float PIBpcap1, PIBpcap2;

    //  Leitura da Carta 1 
    printf("Digite o nome da cidade da carta 1: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo1);
    printf("Populacao (milhões): ");   scanf("%f", &populacao1);
    printf("Area (km²): ");            scanf("%f", &area1);
    printf("PIB (em bilhões): ");      scanf("%f", &PIB1);
    printf("Pontos Turisticos: ");     scanf("%d", &pontoTuristico1);
    getchar();  // limpa buffer

    //  Leitura da Carta 2 
    printf("\nDigite o nome da cidade da carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo2);
    printf("Populacao (milhões): ");   
    scanf("%f", &populacao2);
    printf("Area (km²): ");            
    scanf("%f", &area2);
    printf("PIB (em bilhões): ");      
    scanf("%f", &PIB2);
    printf("Pontos Turisticos: ");     
    scanf("%d", &pontoTuristico2);
    getchar();  // limpa buffer

    // Cálculo de densidade e PIB per capita 
    Denspop1 = (populacao1 ) / area1;
    Denspop2 = (populacao2 ) / area2;
    PIBpcap1 = (PIB1   * 1000000000) / (populacao1 );
    PIBpcap2 = (PIB2   * 1000000000) / (populacao2 );

    int escolha1 = 0, escolha2 = 0;
    float CARTA1_ATR1 = 0, CARTA2_ATR1 = 0;
    float CARTA1_ATR2 = 0, CARTA2_ATR2 = 0;
    float soma1, soma2;
    char* nomeAtributos[7] = {
        "", "Populacao", "Area", "PIB",
        "Pontos Turisticos", "Densidade Demografica", "PIB per Capita"
    };

    //  menu interativo 1
    int exibeMenu = 1;
    switch (exibeMenu) {
        case 1:
            printf("\nDigite o numero do primeiro atributo:\n");
            printf("1 - Populacao\n");
            printf("2 - Area\n");
            printf("3 - PIB\n");
            printf("4 - Pontos Turisticos\n");
            printf("5 - Densidade Demografica\n");
            printf("6 - PIB per Capita\n");
            break;
    }
    scanf("%d", &escolha1);

    switch (escolha1) {
        case 1: CARTA1_ATR1 = populacao1; CARTA2_ATR1 = populacao2; break;
        case 2: CARTA1_ATR1 = area1;       CARTA2_ATR1 = area2;       break;
        case 3: CARTA1_ATR1 = PIB1;        CARTA2_ATR1 = PIB2;        break;
        case 4: CARTA1_ATR1 = pontoTuristico1; CARTA2_ATR1 = pontoTuristico2; break;
        case 5: CARTA1_ATR1 = Denspop1;    CARTA2_ATR1 = Denspop2;    break;
        case 6: CARTA1_ATR1 = PIBpcap1;    CARTA2_ATR1 = PIBpcap2;    break;
        default:
            printf("Opcao invalida para atributo 1!\n");
            return 0;
    }

    //  menu iterativo 2, ocultando a escolha1 ---
    printf("\nEscolha o segundo atributo (diferente de %d):\n", escolha1);
    switch (escolha1) {
        case 1:
            printf("2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
            break;
        case 2:
            printf("1 - Populacao\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
            break;
        case 3:
            printf("1 - Populacao\n2 - Area\n4 - Pontos Turisticos\n5 - Densidade Demografica\n6 - PIB per Capita\n");
            break;
        case 4:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n5 - Densidade Demografica\n6 - PIB per Capita\n");
            break;
        case 5:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n6 - PIB per Capita\n");
            break;
        case 6:
            printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\n");
            break;
    }

    //  Leitura e validação da segunda escolha
    do {
        scanf("%d", &escolha2);
        if (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1) {
            printf("Opcao invalida! Tente novamente:\n");
        }
    } while (escolha2 < 1 || escolha2 > 6 || escolha2 == escolha1);

    // Atribuir valores segundo escolha 
    switch (escolha2) {
        case 1: CARTA1_ATR2 = populacao1;      CARTA2_ATR2 = populacao2;      break;
        case 2: CARTA1_ATR2 = area1;            CARTA2_ATR2 = area2;            break;
        case 3: CARTA1_ATR2 = PIB1;             CARTA2_ATR2 = PIB2;             break;
        case 4: CARTA1_ATR2 = pontoTuristico1;  CARTA2_ATR2 = pontoTuristico2;  break;
        case 5: CARTA1_ATR2 = Denspop1;         CARTA2_ATR2 = Denspop2;         break;
        case 6: CARTA1_ATR2 = PIBpcap1;         CARTA2_ATR2 = PIBpcap2;         break;
    }

    //  Exibição dos dados completos 
    printf("\n== DADOS DAS CARTAS ==\n");
    printf("Carta 1: %sEstado: %c | Codigo: %s\n"
           " Pop: %.2f mi | Area: %.2f km² | PIB: %.2f bi | PTur: %d | Den: %.2f hab/km² | PCap: %.2f R$\n",
           nomeCidade1, estado1, codigo1,
           populacao1, area1, PIB1, pontoTuristico1, Denspop1, PIBpcap1);

    printf("Carta 2: %sEstado: %c | Codigo: %s\n"
           " Pop: %.2f mi | Area: %.2f km² | PIB: %.2f bi | PTur: %d | Den: %.2f hab/km² | PCap: %.2f R$\n",
           nomeCidade2, estado2, codigo2,
           populacao2, area2, PIB2, pontoTuristico2, Denspop2, PIBpcap2);

    //  Comparações individuais com ternário 
    printf("\n== COMPARACAO ==\n");
    printf("%s: C1=%.2f | C2=%.2f => ",
           nomeAtributos[escolha1], CARTA1_ATR1, CARTA2_ATR1);
    if (escolha1 == 5)
        printf(CARTA1_ATR1 < CARTA2_ATR1 ? "C1 venceu\n"
               : CARTA2_ATR1 < CARTA1_ATR1 ? "C2 venceu\n" : "Empate\n");
    else
        printf(CARTA1_ATR1 > CARTA2_ATR1 ? "C1 venceu\n"
               : CARTA2_ATR1 > CARTA1_ATR1 ? "C2 venceu\n" : "Empate\n");

    printf("%s: C1=%.2f | C2=%.2f => ",
           nomeAtributos[escolha2], CARTA1_ATR2, CARTA2_ATR2);
    if (escolha2 == 5)
        printf(CARTA1_ATR2 < CARTA2_ATR2 ? "C1 venceu\n"
               : CARTA2_ATR2 < CARTA1_ATR2 ? "C2 venceu\n" : "Empate\n");
    else
        printf(CARTA1_ATR2 > CARTA2_ATR2 ? "C1 venceu\n"
               : CARTA2_ATR2 > CARTA1_ATR2 ? "C2 venceu\n" : "Empate\n");

    //  Soma final com ternário
    soma1 = CARTA1_ATR1 + CARTA1_ATR2;
    soma2 = CARTA2_ATR1 + CARTA2_ATR2;
    printf("\n== PONTUACAO FINAL ==\n"
           "C1=%.2f | C2=%.2f => %s\n",
           soma1, soma2,
           soma1 > soma2 ? "Carta 1 venceu" :
           soma2 > soma1 ? "Carta 2 venceu" :
           "Empate");

    return 0;
}
