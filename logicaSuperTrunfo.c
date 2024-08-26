#include <stdio.h>

int main()
{

    // declaração das variáveis
    char estadoA;
    char codigoDaCartaA[3];
    char nomeDaCidadeA[80];
    int populacaoA;
    float areaKmSquareA;
    float pibA;
    int numeroPontosTuristicosA;

    // Interação com usuário Estado A - MESTRE
    printf("\n*************Primeiro estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estadoA);

    printf("Digite o código da carta sendo as possibilidades 01 02 03 ou 04.\n");
    scanf(" %3s", &codigoDaCartaA);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço - ex: Nova Friburgo - Assim pega até que seja chamada próxima linha.
    scanf(" %[^\n]", &nomeDaCidadeA);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacaoA);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &areaKmSquareA);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pibA);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &numeroPontosTuristicosA);

    // Aventureiro   Densidade populacional (float) - população dividida pela área da cidade. PIB per capita (float) -  PIB total da cidade dividido pela população
    float densidadeA = populacaoA / areaKmSquareA;
    float pibPerCapitaA = pibA / populacaoA;
    double superPoderA = populacaoA + areaKmSquareA + pibA + pibPerCapitaA + (1.0 / densidadeA) + numeroPontosTuristicosA;

    printf("\n*******Carta 01*******\n");
    printf("Estado: %c\n", estadoA);
    printf("Código da Carta: %c%s\n", estadoA, codigoDaCartaA);
    printf("Nome da Cidade: %s\n", nomeDaCidadeA);
    printf("População: %d\n", populacaoA);
    printf("Área: %.2f Km²\n", areaKmSquareA);
    printf("Densidade populacional: %.2f\n", densidadeA);
    printf("PIB: %.2f bilhões de reais\n", pibA);
    printf("PIB per capita: %.2f\n", pibPerCapitaA);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosA);
    printf("Super Poder: %.2f\n", superPoderA);

    // declaração das variáveis
    char estadoB;
    char codigoDaCartaB[3];
    char nomeDaCidadeB[80];
    int populacaoB;
    float areaKmSquareB;
    float pibB;
    int numeroPontosTuristicosB;

    // Interação com usuário Estado B - MESTRE
    printf("\n*************Segundo estado do Super Trunfo*************\n");

    printf("Digite o Estado de A - H:\n");
    scanf(" %c", &estadoB);

    printf("Digite o código da carta sendo as possibilidades 01 02 03 ou 04.\n");
    scanf(" %3s", &codigoDaCartaB);

    printf("Digite o nome da cidade:\n");
    // Utilizei %[^\n] pois estava encontrando erro quando inseria uma cidade com espaço - ex: Nova Friburgo - Assim pega até que seja chamada próxima linha.
    scanf(" %[^\n]", &nomeDaCidadeB);

    printf("Digite número da população desta cidade:\n");
    scanf(" %d", &populacaoB);

    printf("Digite a área em Km² da cidade:\n");
    scanf(" %f", &areaKmSquareB);

    printf("Qual o PIB da cidade?\n");
    scanf(" %f", &pibB);

    printf("Quantos pontos turísticos tem na cidade?\n");
    scanf(" %d", &numeroPontosTuristicosB);

    // Aventureiro   Densidade populacional (float) - população dividida pela área da cidade. PIB per capita (float) -  PIB total da cidade dividido pela população
    float densidadeB = populacaoB / areaKmSquareB;
    float pibPerCapitaB = pibB / populacaoB;
    double superPoderB = populacaoB + areaKmSquareB + pibB + pibPerCapitaB + (1.0 / densidadeB) + numeroPontosTuristicosB;

    printf("\n*******Carta 02*******\n");
    printf("Estado: %c\n", estadoB);
    printf("Código da Carta: %c%s\n", estadoB, codigoDaCartaB);
    printf("Nome da Cidade: %s\n", nomeDaCidadeB);
    printf("População: %d\n", populacaoB);
    printf("Área: %.2f Km²\n", areaKmSquareB);
    printf("Densidade populacional: %.2f\n", densidadeB);
    printf("PIB: %.2f bilhões de reais\n", pibB);
    printf("PIB per capita: %.2f\n", pibPerCapitaB);
    printf("Número de Pontos Turísticos: %d\n", numeroPontosTuristicosB);
    printf("Super Poder: %.2f\n", superPoderB);

    // Comparar as duas cartas
    printf("\n*******Comparando as cartas...*******\n");

    int escolha1, escolha2;
    printf("\nEscolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Densidade populacional\n");
    printf("6. Número de Pontos Turísticos\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha1);

    printf("\nEscolha o segundo atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. PIB per capita\n");
    printf("5. Densidade populacional\n");
    printf("6. Número de Pontos Turísticos\n");
    printf("7. Super Poder\n");
    scanf("%d", &escolha2);

    int pontosCartaA = 0;
    int resultado1 = 0, resultado2 = 0;

    switch (escolha1)
    {
    case 1:
        resultado1 = (populacaoA > populacaoB) ? 2 : (populacaoA < populacaoB) ? 0
                                                                               : 1;
        pontosCartaA += resultado1;
        break;
    case 2:
        resultado1 = (areaKmSquareA > areaKmSquareB) ? 2 : (areaKmSquareA < areaKmSquareB) ? 0
                                                                                           : 1;
        pontosCartaA += resultado1;
        break;
    case 3:
        resultado1 = (pibA > pibB) ? 2 : (pibA < pibB) ? 0
                                                       : 1;
        pontosCartaA += resultado1;
        break;
    case 4:
        resultado1 = (pibPerCapitaA > pibPerCapitaB) ? 2 : (pibPerCapitaA < pibPerCapitaB) ? 0
                                                                                           : 1;
        pontosCartaA += resultado1;
        break;
    case 5:
        resultado1 = (densidadeA < densidadeB) ? 2 : (densidadeA > densidadeB) ? 0
                                                                               : 1;
        pontosCartaA += resultado1;
        break;
    case 6:
        resultado1 = (numeroPontosTuristicosA > numeroPontosTuristicosB) ? 2 : (numeroPontosTuristicosA < numeroPontosTuristicosB) ? 0
                                                                                                                                   : 1;
        pontosCartaA += resultado1;
        break;
    case 7:
        resultado1 = (superPoderA > superPoderB) ? 2 : (superPoderA < superPoderB) ? 0
                                                                                   : 1;
        pontosCartaA += resultado1;
        break;
    default:
        printf("Atributo inválido!\n");
    }

    switch (escolha2)
    {
    case 1:
        resultado2 = (populacaoA > populacaoB) ? 2 : (populacaoA < populacaoB) ? 0
                                                                               : 1;
        pontosCartaA += resultado2;
        break;
    case 2:
        resultado2 = (areaKmSquareA > areaKmSquareB) ? 2 : (areaKmSquareA < areaKmSquareB) ? 0
                                                                                           : 1;
        pontosCartaA += resultado2;
        break;
    case 3:
        resultado2 = (pibA > pibB) ? 2 : (pibA < pibB) ? 0
                                                       : 1;
        pontosCartaA += resultado2;
        break;
    case 4:
        resultado2 = (pibPerCapitaA > pibPerCapitaB) ? 2 : (pibPerCapitaA < pibPerCapitaB) ? 0
                                                                                           : 1;
        pontosCartaA += resultado2;
        break;
    case 5:
        resultado2 = (densidadeA < densidadeB) ? 2 : (densidadeA > densidadeB) ? 0
                                                                               : 1;
        pontosCartaA += resultado2;
        break;
    case 6:
        resultado2 = (numeroPontosTuristicosA > numeroPontosTuristicosB) ? 2 : (numeroPontosTuristicosA < numeroPontosTuristicosB) ? 0
                                                                                                                                   : 1;
        pontosCartaA += resultado2;
        break;
    case 7:
        resultado2 = (superPoderA > superPoderB) ? 2 : (superPoderA < superPoderB) ? 0
                                                                                   : 1;
        pontosCartaA += resultado2;
        break;
    default:
        printf("Atributo inválido!\n");
    }

    //Pontuação Máxima são 4 pontos, sendo assim, 3 ou mais vitória para A, 2 empate e menor que 2 vitória para B

    if (pontosCartaA >= 3)
    {
        printf("A carta: %c%s é a vencedora!\n", estadoB, codigoDaCartaB);
    }
    else if (pontosCartaA < 2)
    {
        printf("A carta: %c%s é a vencedora!\n", estadoB, codigoDaCartaB);
    }
    else
    {
        printf("Empate! Cada carta venceu em um atributo.\n");
    }


    return 0;
}
