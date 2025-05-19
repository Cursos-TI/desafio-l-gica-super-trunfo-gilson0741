


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

    //  INFORMAÇÕES DA CARTA 1
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

    // APRESENTANDO AS INFORMAÇÕES DAS CARTAS
    printf("\n   CARTA 1  \n");
    printf("Cidade: %s", nomeCidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km2\n", Denspop1);
    printf("PIB per Capita: %.2f reais\n", PIBpcap1);

    printf("\n   CARTA 2   \n");
    printf("Cidade: %s", nomeCidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", Denspop2);
    printf("PIB per Capita: %.2f reais\n", PIBpcap2);

    // COMPARANDO O Atributo PIB per capita
    printf("\n---- COMPARAÇÃO DE CARTAS (Atributo: PIB per capita) ----\n");
    printf("Carta 1 - PIB per capita: %.2f reais\n", PIBpcap1);
    printf("Carta 2 - PIB per capita: %.2f reais\n", PIBpcap2);

    if (PIBpcap1 > PIBpcap2) {
        printf("VENCEDOR: Carta 1 venceu!\n");
    } else if (PIBpcap2 > PIBpcap1) {
        printf("VENCEDOR: Carta 2 venceu!\n");
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}
