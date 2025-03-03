#include <stdio.h>

int main(){
    char estado1, nomedacidade1[50], carta1;
    char estado2, nomedacidade2[50], carta2;
    int populacao1, populacao2, pontoturistico1, pontoturistico2;
    int codigodacarta1, codigodacarta2;
    float area1, area2, densidade1, densidade2, pibper1, pibper2;
    double pib1, pib2;

    printf("____________________________\n");
    printf("Bem Vindo ao Super Trunfo!\n");
    printf("____________________________\n");
    //Recebimento dos dados da Carta1
    printf("Carta 1!\n");
    printf("Digite o Estado(A-H):\n");
    scanf(" %c", &estado1);
    printf("Digite o Codigo da Carta(1-4):\n");
    scanf("%d", &codigodacarta1);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomedacidade1);
    printf("Digite a Populacao:\n");
    scanf("%d", &populacao1);
    printf("Digite a Area em Km^:\n");
    scanf("%f", &area1);
    printf("Digite o PIB: \n");
    scanf("%lf", &pib1);
    printf("Digite o Numero de Ponto Turistico:\n");
    scanf("%d", &pontoturistico1);

    printf("____________________________\n");

    //calculo da densidade populacional
    densidade1 = populacao1 / area1;

    //calculo do pib per capital
    pibper1 = (pib1 * 1000000000) / populacao1;

    //Exibição da Carta1 adicionada
    printf("Carta1 Adicionada:\n");
    printf("Codigo: %c%02d\n", estado1, codigodacarta1);
    printf("Cidade: %s\n", nomedacidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("Pib: %.2lf\n", pib1);
    printf("Ponto Turistico: %d\n", pontoturistico1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("Pib Per Capita: %.2f\n", pibper1);

    printf("\n_______________________________________________\n");

    //Recebimento dos dados da Carta1
    printf("Carta 2!\n");
    printf("Digite o Estado(A-H):\n");
    scanf(" %c", &estado2);
    printf("Digite o Codigo da Carta(1-4):\n");
    scanf("%d", &codigodacarta2);
    printf("Digite o Nome da Cidade:\n");
    scanf(" %[^\n]", nomedacidade2);
    printf("Digite a Populacao:\n");
    scanf("%d", &populacao2);
    printf("Digite a Area em Km^:\n");
    scanf("%f", &area2);
    printf("Digite o PIB: \n");
    scanf("%lf", &pib2);
    printf("Digite o Numero de Ponto Turistico:\n");
    scanf("%d", &pontoturistico2);

    printf("____________________________\n");
    getchar();

    //calculo da densidade populacional
    densidade2 = populacao2 / area2;

    //calculo do pib per capital
    pibper2 = (pib2 * 1000000000) / populacao2;

    //Exibição da Carta1 adicionada
    printf("Carta2 Adicionada:\n");
    printf("Codigo: %c%02d\n", estado2, codigodacarta2);
    printf("Cidade: %s\n", nomedacidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("Pib: %.2lf\n", pib2);
    printf("Ponto Turistico: %d\n", pontoturistico2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("Pib Per Capita: %.2f\n", pibper2);

    printf("______________________________________\n");

    //Comparação de cartas
    printf("Carta 1 - %s: %d\n", nomedacidade1 , populacao1);
    printf("Carta 2 - %s: %d\n", nomedacidade2 , populacao2);

    if (populacao1 > populacao2)
    {
        printf("Resultado: Carta 1 (%s) venceu!\n", nomedacidade1);
    }else {
        printf("Resultado: Carta 2 (%s) venceu!\n", nomedacidade2);
    }

    printf("\n___________________________________\n");
    printf("FIM DO JOGO!......\n");
    getchar();
    return 0;
}