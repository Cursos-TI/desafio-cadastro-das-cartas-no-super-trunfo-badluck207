#include <stdio.h>

int main(){

    char estado, cidade[30], final;
    unsigned long int populacao1, populacao2;
    int pontosturisticos1, pontosturisticos2, codigo;
    double pib1, pibper1, densidade1, superpoder1, carta1, area1;
    double pib2, pibper2, densidade2,carta2, superpoder2, area2;

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
    scanf("%lu" , &populacao1);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lf" , &area1);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos1);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib1);

    //Calculo da Densidade Populacional
    densidade1 = populacao1 / area1;

    //Calculo do PIB Per Capita
    pibper1 = (pib1 * 1000000000) / populacao1;

    //Calculo do super poder
    superpoder1 = area1 + populacao1 + densidade1 + pib1 + pontosturisticos1 + pibper1;

    //Resultado das Coletas dos Dados
    printf("\n***CARTA1 ADICIONADA!***\n");

    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao1);
    printf("Area da Cidade em km: %.2lf km²\n", area1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("Digite o PIB: %.2lf Bilhões de reais\n" ,pib1);
    printf("PIB Per Capita: %.2lf\n" ,pibper1);
    printf("Quantidade de Pontos Turisticos: %d\n", pontosturisticos1);
    printf("SuperPoder: %.2f\n", superpoder1);

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
    scanf("%lu" , &populacao2);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lf" , &area2);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos2);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib2);

    //Calculo da Densidade Populacional
    densidade2 = populacao2 / area2;

    //Calculo do PIB Per Capita
    pibper2 = (pib2 * 1000000000) / populacao2;

    //Calculo do super poder
    superpoder2 = (double)area2 + populacao2 + densidade2 + pib2 + pontosturisticos2 + pibper2; 

    //Resultado das Coletas dos Dados
    printf("\n***CARTA2 ADICIONADA!***\n");

    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB: %.2lf Bilhões de reais\n" ,pib2);
    printf("PIB Per Capita: %.2lf\n" ,pibper2);
    printf("Ponto Turistico: %d\n", pontosturisticos2);
    printf("SuperPoder: %.2f\n\n", superpoder2);
    
    printf("***COMPARACAO DAS CARTAS***:\n");

    //Comparação de Propriedades das Cartas Adicionadas, vence a com maior valor.
    printf("\n***CARTA VENCEDORA!!!***\n");
    printf("\nPopulacao: %s\n", (populacao1 > populacao2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Area: %s\n", (area1 > area2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU"); 
    printf("PontosTuristicos: %s\n", (pontosturisticos1 > pontosturisticos2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("Pib: %s\n", (pib1 > pib2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("PibPerCapita: %s\n", (pibper1 > pibper2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");
    printf("SuperPoder: %s\n", (superpoder1 > superpoder2)? "CARTA 1 VENCEU" : "CARTA 2 VENCEU");  

    //Comparacao de Densidade Populacional
    printf("\n**VENCE QUEM TEM A MENOR DENSIDADE POPULACIONAL!**\n");
    printf("Densidade Populacional Carta 1: %.2f\n", densidade1);
    printf("Densidade Populacional Carta 2: %.2f\n", densidade2);

    if (densidade1 < densidade2)
    {
        printf("Resultado: Carta 1 Venceu!\n");
    }
    else if(densidade1 == densidade2)
    {
        printf("Resultado: Empatou!\n");
    }
    if (densidade2 < densidade1)
    {
        printf("Resultado: Carta 2 Venceu!\n");
    }

    //final do jogo
    printf("\nDigite 'N ou n' e Pressione 'Enter' para fechar o jogo...\n");
    scanf(" %c", &final);

    return  0;
}