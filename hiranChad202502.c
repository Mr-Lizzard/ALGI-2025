#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main() {
    int lat[100], longi[100],prod[100], acid[100], answer;
    srand(time(NULL));
    
    do {
        printf("Ola, bem vindo ao sistema da CAIFSUL\n Por favor selecione uma opcao:\n 1 - Randomizar os valores\n 2 - Busca por Producao\n 3 - Busca por Acidez\n 4 - Ranking\n 5 - Corrigir dados\n 0 - Sair\n"); 
        scanf("%d", &answer);
        switch(answer) {
            case 1: 
                for(int i = 0; i < 100; i++) {
                    lat[i] = rand() % 1000;
                    longi[i] = rand() % 1000;
                    prod[i] = rand() % 1000;
                    acid[i] = rand() % 1000;
                    printf("%d %d %d %d\n", lat[i], longi[i], prod[i], acid[i]);

                }
        } 
    } while(answer != 0);
}