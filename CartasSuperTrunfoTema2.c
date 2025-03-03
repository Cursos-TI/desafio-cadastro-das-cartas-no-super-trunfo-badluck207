#include <stdio.h>
#include <stdlib.h>

int main(){
    char estado1, nomedacidade1[50], carta1;
    char estado2, nomedacidade2[50], carta2;
    int populacao1, populacao2, pontoturistico1, pontoturistico2;
    int codigodacarta1, codigodacarta2, opcao, escolha, primeiraOpcao;
    float area1, area2, densidade1, densidade2, pibper1, pibper2;
    double pib1, pib2;

    
do {
        //Sistema de Menu
        printf("_____________________________\n");
        printf("Bem Vindo ao Super Trunfo!");
        printf("\n_____________________________\n");
        printf("1) Adicionar Cartas\n");
        printf("2) Mostrar Cartas\n");
        printf("3) Regras\n");
        printf("4) Jogar\n");
        printf("5) Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        //Regras do Menu
        switch (opcao)
        {
            case 1://Adicionamento das Cartas
            printf("\nAdicione a primeira carta!\n");
            printf("Carta 1!\n");
            printf("Digite o Estado(A-H):\n");
            scanf(" %c", &estado1);
            printf("Digite o Codigo da Carta(1-4):\n");
            scanf("%d", &codigodacarta1);
            getchar();
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

            printf("\nAdicione a segunda carta!\n");
            printf("Carta 2!\n");
            printf("Digite o Estado(A-H):\n");
            scanf(" %c", &estado2);
            printf("Digite o Codigo da Carta(1-4):\n");
            scanf("%d", &codigodacarta2);
            getchar();
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
            
            //Calculo da Densidade Populacional e Pib Per
            densidade1 = populacao1 / area1;
            pibper1 = (pib1 * 1000000000) / populacao1;

            densidade2 = populacao2 / area2;
            pibper2 = (pib2 * 1000000000) / populacao2;

            printf("CARTAS ADICIONADAS COM SUCESSO!\n");
            break;

            case 2://Exibicao das Cartas Adicionadas
            printf("\nCARTAS ADICIONADAS!\n");
            printf("Carta1\n");
            printf("Codigo: %c%02d\n", estado1, codigodacarta1);
            printf("Cidade: %s\n", nomedacidade1);
            printf("Populacao: %d\n", populacao1);
            printf("Area: %.2f\n", area1);
            printf("Pib: %.2lf\n", pib1);
            printf("Ponto Turistico: %d\n", pontoturistico1);
            printf("Densidade Populacional: %.2f\n", densidade1);
            printf("Pib Per Capita: %.2f\n", pibper1);
            printf("_____________________________________________\n");
            printf("Carta2\n");
            printf("Codigo: %c%02d\n", estado2, codigodacarta2);
            printf("Cidade: %s\n", nomedacidade2);
            printf("Populacao: %d\n", populacao2);
            printf("Area: %.2f\n", area2);
            printf("Pib: %.2lf\n", pib2);
            printf("Ponto Turistico: %d\n", pontoturistico2);
            printf("Densidade Populacional: %.2f\n", densidade2);
            printf("Pib Per Capita: %.2f\n", pibper2);
            break;

            case 3://Exibicao das Regras do jogo
            printf("\n***REGRA DO JOGO SUPER TRUNFO***\n");
            printf("1) Adicione duas cartas, definindo suas propriedades.\n");
            printf("2) Apos adicionar as cartas, verique na opcao ('Mostrar Cartas') se esta tudo certo.\n");
            printf("3) Clique em Jogar para escolher uma Propriedade que deseja Comparar.\n");
            printf("4) Vence o Jogo quem tiver o Maior Valor na Propriedade.\n");
            printf("5) Porem se escolher a Densidade Populacional vence quem tiver o Menor Valor!\n");
            break;

            case 4:
            do 
            {   //Menu de comparacao das propriedas
                printf("\nBem vindo ao Jogo Super-Trunfo, Qual Propriedade deseja Comparar:\n");
                printf("1) Populacao\n");
                printf("2) Area\n");
                printf("3) PIB\n");
                printf("4) Pontos Turisticos\n");
                printf("5) Densidade Populacional\n");
                printf("6) PIB PER CAPITA\n");
                printf("7) Voltar ao Menu Principal\n");
                printf("Escolha uma opcao: ");
                scanf("%d", &escolha);

                switch (escolha)//Lista de conjutos de definições de escolhas
                {
                    case 1:
                    if (populacao1 > populacao2)//Comparação da População
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Populacao: %d\n", nomedacidade1, populacao1);
                        printf("\nCarta 2 - (%s) Populacao: %d\n", nomedacidade2, populacao2);
                        printf("\nResultado: Carta 1 - (%s) Populacao: %d Venceu!\n", nomedacidade1, populacao1);
                    }else if (populacao1 < populacao2)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Populacao: %d \n", nomedacidade1, populacao1);
                        printf("\nCarta 2 - (%s) Populacao: %d \n", nomedacidade2, populacao2);
                        printf("\nResultado: Carta 2 - (%s) Populacao: %d Venceu!\n", nomedacidade2, populacao2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Populacao: %d\n", nomedacidade1, populacao1);
                        printf("\nCarta 2 - (%s) Populacao: %d\n", nomedacidade2, populacao2);
                        printf("\nResultado: Empatou!\n");
                    }
                    
                    break;

                    case 2:
                    if (area1 > area2)//Comparação da Area
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Area: %.2f\n", nomedacidade1, area1);
                        printf("\nCarta 2 - (%s) Area: %.2f\n", nomedacidade2, area2);
                        printf("\nResultado: Carta 1 - (%s) Area: %.2f Venceu!\n", nomedacidade1, area1);
                    }else if (area1 < area2)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Area: %.2f \n", nomedacidade1, area1);
                        printf("\nCarta 2 - (%s) Area: %.2f \n", nomedacidade2, area2);
                        printf("\nResultado: Carta 2 - (%s) Area: %.2f Venceu!\n", nomedacidade2, area2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Area: %.2f\n", nomedacidade1, area1);
                        printf("\nCarta 2 - (%s) Area: %.2f\n", nomedacidade2, area2);
                        printf("\nResultado: Empatou!\n");
                    }
                    break;

                    case 3:
                    if (pib1 > pib2)//Comparação do PIB
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) PIB: %.2lf\n", nomedacidade1, pib1);
                        printf("\nCarta 2 - (%s) PIB: %.2lf\n", nomedacidade2, pib2);
                        printf("\nResultado: Carta 1 - (%s) PIB: %.2lf Venceu!\n", nomedacidade1, pib1);
                    }else if (pib1 < pib2)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) PIB: %.2lf \n", nomedacidade1, pib1);
                        printf("\nCarta 2 - (%s) PIB: %.2lf \n", nomedacidade2, pib2);
                        printf("\nResultado: Carta 2 - (%s) PIB: %.2lf Venceu!\n", nomedacidade2, pib2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) PIB: %.2lf\n", nomedacidade1, pib1);
                        printf("\nCarta 2 - (%s) PIB: %.2lf\n", nomedacidade2, pib2);
                        printf("\nResultado: Empatou!\n");
                    }
                    break;

                    case 4:
                    if (pontoturistico1 > pontoturistico2)//Comparação do Ponto Turistico
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Ponto Turistico: %d\n", nomedacidade1, pontoturistico1);
                        printf("\nCarta 2 - (%s) Ponto Turistico: %d\n", nomedacidade2, pontoturistico2);
                        printf("\nResultado: Carta 1 - (%s) Ponto Turistico: %d Venceu!\n", nomedacidade1, pontoturistico1);
                    }else if (pontoturistico1 < pontoturistico2)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Ponto Turistico: %d \n", nomedacidade1, pontoturistico1);
                        printf("\nCarta 2 - (%s) Ponto Turistico: %d \n", nomedacidade2, pontoturistico2);
                        printf("\nResultado: Carta 2 - (%s) Ponto Turistico: %d Venceu!\n", nomedacidade2, pontoturistico2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Ponto Turistico: %d\n", nomedacidade1, pontoturistico1);
                        printf("\nCarta 2 - (%s) Ponto Turistico: %d\n", nomedacidade2, pontoturistico2);
                        printf("\nResultado: Empatou!\n");
                    }
                    break;  

                    case 5:
                    if (densidade1 < densidade2)//Comparação da Densidade Populacionaç
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Densidade Populacional: %.2f\n", nomedacidade1, densidade1);
                        printf("\nCarta 2 - (%s) Densidade Populacional: %.2f\n", nomedacidade2, densidade2);
                        printf("\nResultado: Carta 1 - (%s) Densidade Populacional: %.2f Venceu!\n", nomedacidade1, densidade1);
                    }else if (densidade2 < densidade1)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Densidade Populacional: %.2f\n", nomedacidade1, densidade1);
                        printf("\nCarta 2 - (%s) Densidade Populacional: %.2f\n", nomedacidade2, densidade2);
                        printf("\nResultado: Carta 2 - (%s) Densidade Populacional: %.2f Venceu!\n", nomedacidade2, densidade2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Densidade Populacional: %.2f\n", nomedacidade1, densidade1);
                        printf("\nCarta 2 - (%s) Densidade Populacional: %.2f\n", nomedacidade2, densidade2);
                        printf("\nResultado: Empatou!\n");
                    }
                    break;

                    case 6:
                    if (pibper1 > pibper2)//Comparação do PIB PER CAPITA
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Pib Per Capita: %.2f\n", nomedacidade1, pibper1);
                        printf("\nCarta 2 - (%s) Pib Per Capita: %.2f\n", nomedacidade2, pibper2);
                        printf("\nResultado: Carta 1 - (%s) Pib Per Capita: %.2f Venceu!\n", nomedacidade1, pibper1);
                    }else if (pibper1 < pibper2)
                    {   
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Pib Per Capita: %.2f\n", nomedacidade1, pibper1);
                        printf("\nCarta 2 - (%s) Pib Per Capita: %.2f\n", nomedacidade2, pibper2);
                        printf("\nResultado: Carta 2 - (%s) Pib Per Capita: %.2f Venceu!\n", nomedacidade2, pibper2);
                    } else {
                        printf("\n------------------------------------------------------------------\n");
                        printf("Carta 1 - (%s) Pib Per Capita: %.2f\n", nomedacidade1, pibper1);
                        printf("\nCarta 2 - (%s) Pib Per Capita: %.2f\n", nomedacidade2, pibper2);
                        printf("\nResultado: Empatou!\n");
                    }
                    break;
                    case 7:
                        printf("\nVoltando ao Menu Principal...\n");
                        break;
                default:
                    printf("Opcao Invalida, Tente Novamente!\n");//Se nenhuma opção for valida exibe essa mensagem de erro.
                    break;
                }
            }while (escolha != 7);//Caso as escolhas forem diferentes ao numero especificado voltara para o Menu da Comparacao. 
                
            break;

            case 5:
            printf("Saindo do Jogo.......\n");//Fechamento do jogo
            break;
        default:
            printf("Opcao Invalida, Tente Novamente!\n");//Se nenhuma opção for valida exibe essa mensagem de erro.
            break;
        }
    }while (opcao != 5);

    return 0;
}