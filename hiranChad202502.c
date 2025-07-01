#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

int main() {
    int lat[100], longi[100], prod[100], acid[100], answer;
    int prodOriginal[100], latiOriginal[100], longOriginal[100], acidOriginal[100];
    int answer2, confirmation;
    srand(time(NULL));

    do {
        printf("Ola, bem vindo ao sistema da CAIFSUL\n Por favor selecione uma opcao:\n"
               " 1 - Randomizar os valores\n"
               " 2 - Busca por Producao\n"
               " 3 - Busca por Acidez\n"
               " 4 - Ranking por Produção\n"
               " 5 - Ranking por Acidez\n"
               " 6 - Correção de dados\n"
               " 0 - Sair\n"
               "\n");
        scanf("%d", &answer);
        #ifdef _WIN32
            system("cls");
        #else
            system("clear");
        #endif

        printf("\n");

        // Menu interativo usando um Switch dentro de um while pra sempre voltar pro menu apos uma interacao do usuario.
        switch (answer) {
            case 1:
                for (int i = 0; i < 100; i++) {
                    // Aleatorizar os elementos entre 1 e 1000.
                    lat[i] = rand() % 1000;
                    longi[i] = rand() % 1000;
                    prod[i] = rand() % 1000;
                    acid[i] = rand() % 1000;

                    // Manter a posicao original dos elementos.
                    prodOriginal[i] = prod[i];
                    latiOriginal[i] = lat[i];
                    longOriginal[i] = longi[i];
                    acidOriginal[i] = acid[i];
                }
                printf("Valores aleatorios gerados!\n");
                printf("\n\n");
                break;

            case 2:
                // Ordena os valores do array de producao em ordem decrescente.
                for (int i = 0; i < 100; i++) {
                    for (int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if (prod[j] > prod[i]) {
                            tempProd = prod[i];
                            prod[i] = prod[j];
                            prod[j] = tempProd;

                            tempLat = lat[i];
                            lat[i] = lat[j];
                            lat[j] = tempLat;

                            tempLong = longi[i];
                            longi[i] = longi[j];
                            longi[j] = tempLong;

                            tempAcid = acid[i];
                            acid[i] = acid[j];
                            acid[j] = tempAcid;
                        }
                    }
                }

                printf("Digite a posição no ranking de produção desejado: \n");
                int prodBusca;
                scanf("%d", &prodBusca);
                printf("Posição no ranking : %d\n Latitude : %d\n Longitude : %d\n Producao : %d\n Acidez : %d\n\n",
                       prodBusca, lat[prodBusca - 1], longi[prodBusca - 1], prod[prodBusca - 1], acid[prodBusca - 1]);
                break;

            case 3:
                // Ordena os valores do array de acidez em ordem decrescente.
                for (int i = 0; i < 100; i++) {
                    for (int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if (acid[j] > acid[i]) {
                            tempProd = prod[i];
                            prod[i] = prod[j];
                            prod[j] = tempProd;

                            tempLat = lat[i];
                            lat[i] = lat[j];
                            lat[j] = tempLat;

                            tempLong = longi[i];
                            longi[i] = longi[j];
                            longi[j] = tempLong;

                            tempAcid = acid[i];
                            acid[i] = acid[j];
                            acid[j] = tempAcid;
                        }
                    }
                }

                printf("Digite a posição no ranking de acidez desejado: \n");
                int acidBusca;
                scanf("%d", &acidBusca);
                printf("Posição no ranking : %d\n Latitude : %d\n Longitude : %d\n Producao : %d\n Acidez : %d\n\n",
                       acidBusca, lat[acidBusca - 1], longi[acidBusca - 1], prod[acidBusca - 1], acid[acidBusca - 1]);
                break;

            case 4:
                // Ranking por produção.
                printf("\t\t\t\tRanking por produção: \n");
                for (int i = 0; i < 100; i++) {
                    for (int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if (prod[j] > prod[i]) {
                            tempProd = prod[i];
                            prod[i] = prod[j];
                            prod[j] = tempProd;

                            tempLat = lat[i];
                            lat[i] = lat[j];
                            lat[j] = tempLat;

                            tempLong = longi[i];
                            longi[i] = longi[j];
                            longi[j] = tempLong;

                            tempAcid = acid[i];
                            acid[i] = acid[j];
                            acid[j] = tempAcid;
                        }
                    }
                }

                for (int k = 0; k < 100; k++) {
                    printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n\n\n",
                           lat[k], longi[k], prod[k], acid[k]);
                }

                break;
            case 5:
                // Ranking por acidez.
                printf("\t\t\t\tRanking por Acidez: \n");
                for (int i = 0; i < 100; i++) {
                    for (int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if (acid[j] > acid[i]) {
                            tempProd = prod[i];
                            prod[i] = prod[j];
                            prod[j] = tempProd;

                            tempLat = lat[i];
                            lat[i] = lat[j];
                            lat[j] = tempLat;

                            tempLong = longi[i];
                            longi[i] = longi[j];
                            longi[j] = tempLong;

                            tempAcid = acid[i];
                            acid[i] = acid[j];
                            acid[j] = tempAcid;
                        }
                    }
                }

                for (int k = 0; k < 100; k++) {
                    printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n\n\n",
                           lat[k], longi[k], prod[k], acid[k]);
                }
                break;

            case 6:
                // Menu de correção de dados.
                printf("Digite o valor da latitude em que deseja corrigir: \n");
                int latBusca;
                scanf("%d", &latBusca);
                printf("Digite o valor da longitude em que deseja corrigir: \n");
                int longBusca;
                scanf("%d", &longBusca);

                for (int i = 0; i < 100; i++) {
                    if (lat[i] == latBusca && longi[i] == longBusca) {
                        printf("Coordenada encontrada!\n");
                        printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n",
                               lat[i], longi[i], prod[i], acid[i]);
                        printf("Digite o novo valor de producao: \n");
                        scanf("%d", &prod[i]);
                        printf("Digite o novo valor de acidez: \n");
                        scanf("%d", &acid[i]);
                        printf("Dados corrigidos com sucesso!\n");
                        break;
                    }
                }
                break;

            default:
                printf("Digite uma opcao valida!!!\n\n\n");
        }

    } while (answer != 0);

    return 0;
}