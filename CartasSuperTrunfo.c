#include <stdio.h>

int main(){

    char estado;
    int cidade;
    float populacao;
    double area;
    int pontosturisticos;
    float pib;
    char continuar = 'S';
    //Sistema de Loop: Caso o resultado for verdeiro 'S' o comando irar executar tudo dentro das chaves
    while (continuar == 's' || continuar == 'S') {

    //Estado
    printf("Digite o Estado:(Uma Letra de A - H)\n");
    scanf(" %c" , &estado);

    //Cidade
    printf("Digite a Cidade:(Um Numero e 1- 4)\n");
    scanf("%d", &cidade);

    //População
    printf("Digite o numero da Populacao:\n");
    scanf("%f" , &populacao);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lf" , &area);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%f", &pib);

    //Resultado das Coletas dos Dados
    printf("\nCarta Adicionada!\n");
    printf("Numero da Carta: %c%d\n", estado, cidade);
    printf("Populacao: %.2f\n", populacao);
    printf("Area: %.2f\n", area);
    printf("Ponto Turistico: %d\n", pontosturisticos);
    printf("PIB: %.2f\n" ,pib);

    //Condição para tomar a decisao final do programa
    printf("\nPressione 'S' para Adicionar outra Carta ou 'N' para sair\n");
    scanf(" %c" , &continuar);

    }

    //Caso pressionar 'N' o programa exibirar um aviso e fechara
    printf("Programa finalizado.\n");

    return  0;
}
