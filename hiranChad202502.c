#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>


int main() {
    int lat[100], longi[100],prod[100], acid[100], answer;
    int prodOriginal[100], latiOriginal[100], longOriginal[100], acidOriginal[100];
    srand(time(NULL));
    
    do {
        printf("Ola, bem vindo ao sistema da CAIFSUL\n Por favor selecione uma opcao:\n 1 - Randomizar os valores\n 2 - Busca por Producao\n 3 - Busca por Acidez\n 4 - Ranking\n 5 - Corrigir dados\n 0 - Sair\n"); 
        scanf("%d", &answer);
        printf("\n");
        switch(answer) {
            case 1: 
                for(int i = 0; i < 100; i++) {

                    lat[i] = rand() % 1000;
                    longi[i] = rand() % 1000;
                    prod[i] = rand() % 1000;
                    acid[i] = rand() % 1000;
                    printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n\n", lat[i], longi[i], prod[i], acid[i]);
                    prodOriginal[i] = prod[i];
                    latiOriginal[i] = lat[i];
                    longOriginal[i] = longi[i];
                    acidOriginal[i] = acid[i];
                }
                break;
            case 2:
                printf("Digite o valor de producao desejado: \n");
                int prodBusca;
                int booleanprod = false;
                scanf("%d", &prodBusca);
                for(int i = 0; i < 100; i++) {
                    if(prodBusca == prod[i]) {
                        printf("Encontrado: Latitude: %d, Longitude: %d, Producao: %d, Acidez: %d\n", lat[i], longi[i], prod[i], acid[i]);
                        printf("\n\n\n");
                        booleanprod = true;
                    }
                }
                if(booleanprod == false) {
                    printf("Nao encontrado: Producao %d\n", prodBusca);
                    printf("\n\n\n");
                }
                booleanprod = false;
                
                break;
            case 3:
                printf("Digite o valor de acidez desejado: \n");
                int acidBusca;
                int booleanAcid = false;
                scanf("%d", &acidBusca);
                for(int i = 0; i < 100; i++) {
                    if(acidBusca == acid[i]) {
                        printf("Encontrado: Latitude: %d, Longitude: %d, Producao: %d, Acidez: %d\n", lat[i], longi[i], prod[i], acid[i]);
                        printf("\n\n\n");
                        booleanAcid = true;
                    }
                }
                if(booleanAcid == false){
                    printf("Não foi encontrado: Acidez %d\n", acidBusca);
                    printf("\n\n\n");
                }
                booleanAcid = false;
                break;
            case 4:
                printf("Ranking por produção: \n");
                for(int i = 0; i < 100; i++) {
                    for(int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if(prod[j] > prod[i]) {
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
                for(int k = 0; k < 100; k++) {
                    printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n\n\n", lat[k], longi[k], prod[k], acid[k]);
                }
                printf("Ranking por Acidez: \n");
                for(int i = 0; i < 100; i++) {
                    for(int j = i + 1; j < 100; j++) {
                        int tempProd, tempLat, tempLong, tempAcid;
                        if(acid[j] > acid[i]) {
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
                        for(int k = 0; k < 100; k++) {
                            printf("Latitude : %d\nLongitude : %d\nProducao : %d\nAcidez : %d\n\n\n", lat[k], longi[k], prod[k], acid[k]);
                    }
                    break;
            case 5:
                int answer2, confirmation;
                for(int i = 0; i < 100; i++) {
                    printf("%d - Latitude : %d\n Longitude : %d\n Producao : %d\n Acidez : %d\n\n\n", i + 1, latiOriginal[i],longOriginal[i], prodOriginal[i], acidOriginal[i]);
                }
                printf("Por Favor, digite a posicao em que deseja realizar a alteracao dos valores : \n");
                scanf("%d",&answer2);
                printf("Latitude : %d\n Longitude : %d\n Producao : %d\n Acidez : %d\n\n\n", latiOriginal[answer2 -1], longOriginal[answer2-1], prodOriginal[answer2-1], acidOriginal[answer2-1]);
                printf("Você deseja alterar esses valores ?\n 1 - Sim\n 2-Nao\n");
                scanf("%d", &confirmation);
                if(confirmation == 1) {
                    printf("Digite a nova latitude :\n");
                    scanf("%d",&latiOriginal[answer2-1]);
                    printf("Digite a nova longitude :\n");
                    scanf("%d",&longOriginal[answer2-1]);
                    printf("Digite o novo valor de producao :\n");
                    scanf("%d",&prodOriginal[answer2-1]);
                    printf("Digite o novo valor de Acidez :\n");
                    scanf("%d",&acidOriginal[answer2-1]);
                } else {
                    printf("Operacao cancelada com sucesso!");
                }
                for(int i = 0; i < 100; i++) {
                    printf("%d - Latitude : %d\n Longitude : %d\n Producao : %d\n Acidez : %d\n\n\n", i + 1, latiOriginal[i],longOriginal[i], prodOriginal[i], acidOriginal[i]);
                }
                break;
            default: 
                printf("Digite uma opcao valida!!!\n\n\n");
                }
            
        }while(answer != 0); 

        return 0;
    }