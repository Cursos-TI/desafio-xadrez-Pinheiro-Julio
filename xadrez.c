#include <stdio.h>

//ação de movimento do bispo
 void diagonal(int numero){
    
        for (int i = 1; i <= 5; i++){
            for(int j = 0; j <1; j++){

            printf("Cima");
             }

             printf("Direita\n");
        }
    }
    
    //ação de movimento torre
    void direita(int numero){
        if (numero > 0){

        printf("Direita\n");
        direita(numero - 1);
        }
    }

        //ação de movimento da raiha
         void esquerda(int numero){
            if (numero > 0){

             printf("Esquerda\n");
             esquerda(numero - 1);
             }
            }

int main() {
    
    //movimento do bispo
    int bispo = 5;

    printf("movimento do bispo...\n");
    diagonal(bispo);

    //movimento da torre
    int torre = 5;

    printf("movimento da torre...\n");
    direita(torre);

    //movimento da rainha
    int rainha = 8;

    printf("movimento da rainha...\n");
    esquerda(rainha);

   
    //flag que controla o movimento do cavalo
    int movimento = 1; 

    while (movimento--){
        for(int i = 0; i < 2; i++){

            printf("Baixo\n"); // imprime loop interno
        }

        printf("Esquerda\n"); //Imprime loop externo
    }
    return 0;
}
