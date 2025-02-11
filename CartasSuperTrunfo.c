#include <stdio.h>

int main(){

    char estado, cidade[30], final;
    long long int populacao1, populacao2, area1, area2;
    int pontosturisticos1, pontosturisticos2, codigo;
    double pib1, pibper1, densidade1, superpoder1, carta1, cartas1;
    double pib2, pibper2, densidade2,carta2, superpoder2, cartas2;

    //Coleta de dados da Primeira Carta
    printf("Carta 1:\n");

    //Estado
    printf("Digite o Estado:(Uma Letra de A - H)\n");
    scanf(" %c" , &estado);
    getchar();

    //Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", cidade);

    //Cidade
    printf("Digite o Codigo da Carta:(01 - 04)\n");
    scanf("%d", &codigo);    

    //População
    printf("Digite o Numero da Populacao:\n");
    scanf("%lld" , &populacao1);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lld" , &area1);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos1);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib1);

    //Calculo da Densidade Populacional
    densidade1 = (double)populacao1 / area1;

    //Calculo do PIB Per Capita
    pibper1 = pib1 / populacao1;


    //Resultado das Coletas dos Dados
    printf("\n***CARTA1 ADICIONADA!***\n");

    printf("Digite o Estado: %c\n",estado);
    printf("Digite o Numero da Carta: %c%02d\n", estado, codigo);
    printf("Digite o Nome da Cidade: %s\n", cidade);
    printf("Digite a Populacao: %lld habitantes\n", populacao1);
    printf("Digite a Area da Cidade em km: %lld km²\n", area1);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade1);
    printf("Digite o PIB: %.3f\n" ,pib1);
    printf("PIB Per Capita: %.2f\n" ,pibper1);
    printf("Digite a Quantidade de Pontos Turisticos: %d\n", pontosturisticos1);
    //Calculo do super poder
    superpoder1 = (double)area1 + populacao1 + densidade1 + pib1 + pontosturisticos1 + pibper1;
    printf("SuperPoder: %.2f\n", superpoder1);
    getchar();

    //=======================================================================================
    //Coleta de dados da Segunda Carta
    printf("\nCarta 2:\n");

    //Estado
    printf("Digite o Estado:(Uma Letra de A - H)\n");
    scanf(" %c" , &estado);
    getchar();

    //Cidade
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", cidade);

    //Cidade
    printf("Digite o Codigo da Carta:(01 - 04)\n");
    scanf("%d", &codigo);    

    //População
    printf("Digite o Numero da Populacao:\n");
    scanf("%lld" , &populacao2);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lld" , &area2);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos2);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib2);

    //Calculo da Densidade Populacional
    densidade2 = (double)populacao2 / area2;

    //Calculo do PIB Per Capita
    pibper2 = pib2 / populacao2;

     //Calculo do super poder
     superpoder2 = (double)area2 + populacao2 + densidade2 + pib2 + pontosturisticos2 + pibper2;

    //Resultado das Coletas dos Dados
    printf("\n***CARTA2 ADICIONADA!***\n");

    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lld habitantes\n", populacao2);
    printf("Area: %lld km²\n", area2);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade2);
    printf("PIB: %.3f\n" ,pib2);
    printf("PIB Per Capita: %.2f\n" ,pibper2);
    printf("Ponto Turistico: %d\n", pontosturisticos2);
    printf("SuperPoder: %.2f\n\n", superpoder2);
    
    printf("***COMPARACAO DAS CARTAS***:\n");
    //Calculo da Comparação das Propriedades das Cartas, o Maior Valor Vence!
    populacao1 > populacao2;
    area1 > area2;
    pontosturisticos1 > pontosturisticos2;
    pib1 > pib2;
    densidade1 > densidade2;
    pibper1 > pibper2;

    //Comparação de Propriedades das Cartas Adicionadas, vence a com maior valor.
    printf("\n***CARTA VENCEDORA!!!***\n");
    printf("\nPopulacao: %s\n", (populacao1 > populacao2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Area: %s\n", (area1 > area2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU"); 
    printf("PontosTuristicos: %s\n", (pontosturisticos1 > pontosturisticos2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Pib: %s\n", (pib1 > pib2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("PibPerCapita: %s\n", (pibper1 > pibper2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("SuperPoder: %s\n", (superpoder1 > superpoder2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    
    //Valores a ser Comparadas
    cartas1 = densidade1;
    cartas2 = densidade2;

    //Comparacao de Densidade Populacional
    cartas1 < cartas2;
    printf("\n**VENCE QUEM TEM A MENOR DENSIDADE POPULACIONAL!**\n");
    printf("Densidade Populacional Carta 1: %.2f\nDensidade Populacional Carta 2: %.2f\nResultado:%s\n", densidade1, densidade2, (cartas1 < cartas2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");

    //final do jogo
    printf("\nPressione N para fechar o jogo...\n");
    scanf(" %c", &final);

    return  0;
}