#include <stdio.h>

int main(){

    char estado, cidade[30];
    long long int populacao, area;
    int pontosturisticos, codigo;
    double pib, pibper, densidade;

    char continuar = 'S';
    //Sistema de Loop: Caso o resultado for verdeiro 'S' o comando irar executar tudo dentro das chaves
    while (continuar == 's' || continuar == 'S') {

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
    scanf("%lld" , &populacao);

    //Area total da cidade
    printf("Digite a Area da Cidade:\n");
    scanf("%lld" , &area);

    //Numero de Pontos Turisticos da  cidade
    printf("Digite a Quantidade de Pontos Turistico da Cidade:\n");
    scanf("%d" , &pontosturisticos);

    //Numero do PIB da Cidade
    printf("Digite o numero do PIB da Cidade:\n");
    scanf("%lf", &pib);

    //Calculo da Densidade Populacional
    densidade = (double)populacao / area;

    //Calculo do PIB Per Capita
    pibper = pib / populacao;

    //Resultado das Coletas dos Dados
    printf("\nCARTA ADICIONADA!\n");
    printf("Estado: %c\n",estado);
    printf("Numero da Carta: %c%02d\n", estado, codigo);
    printf("Nome da Cidade: %s\n", cidade);
    printf("Populacao: %lld habitantes\n", populacao);
    printf("Area: %lld km²\n", area);
    printf("Densidade Populacional: %.2f pessoas/km²\n", densidade);
    printf("PIB: %.3f reais\n" ,pib);
    printf("PIB Per Capita: %.2f reais\n" ,pibper);
    printf("Ponto Turistico: %d\n", pontosturisticos);

    //Condição para tomar a decisao final do programa
    printf("\nPressione 'S' para Adicionar outra Carta ou 'N' para sair\n");

    getchar();
    scanf(" %c" , &continuar);

    }
    //Caso pressionar 'N' o programa exibirar um aviso e fechara
    printf("***FIM DO JOGO!***\n");
    getchar();
    
    printf("\nPressione Enter para fechar o jogo...\n");
    getchar();

    return  0;
}