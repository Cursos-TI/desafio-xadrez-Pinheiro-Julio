#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    printf("Bispo\n");

     //Move o bispo 5 casas na diagonal
    for(int b = 0; b < 5; b++){
        printf("Cima, Direita\n"); //Imprime a direção do movimento
    }

    
    // Implementação de Movimentação da Torre
    printf("Torre\n");
     int a = 1;
    //Move a torre 5 casas para a direita
    do {
        printf("Direita\n");
        a++;
        
    } while ( a <= 5);


    // Implementação de Movimentação da Rainha
    printf("Rainha\n");
    int i = 1;

        //Move a rainha 8 casas para a esquerda
    while ( i <= 8){
        printf("Esquerda\n"); //Imprime a posição a ser movida
        i++;
    }
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
