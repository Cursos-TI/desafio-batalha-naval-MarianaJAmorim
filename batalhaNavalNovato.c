#include <stdio.h>

int main() {

char linha [10]= {'A','B','C','D','E','F','G','H','I','J'};

// Criando tabuleiro (Matriz 10x10)
int tabuleiro[10][10];
int i, j;

for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
        tabuleiro[i][j] = 0;
    }
}

// Navio Horizontal
for (int i = 0; i < 3; i++){
tabuleiro [6][6+i] = 3;}

// Navio Vertical

for (int i = 0; i < 3; i++){
tabuleiro [2+i][7] = 3;}

// exibicao do tabuleiro

printf("\n Tabuleiro Batalha Naval \n");

printf(" ");
    for (int j = 0; j < 10; j++){
        printf("%2c", linha[j]);
    }
    
    printf("\n");

    for (int i = 0; i < 10; i++){
        printf("%2d", i + 1);
        for (int j = 0; j <10; j++){
        if (tabuleiro[i][j] == 0)
                    printf(" 0"); // agua
                else
                    printf(" x"); //navio
        }
        printf("\n");    
    }

    return 0;

}
