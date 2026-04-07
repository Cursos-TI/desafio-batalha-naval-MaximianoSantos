#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    //Área para declaração de variaveis.
    int index = 0;
    
    //Área para declaração das matrizes.
    int tabuleiro [10][10] = {
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    };

    //Área para declaração de vetores.
    int navio1[3] = {3,3,3};
    int navio2[3] = {3,3,3};
    int navio3[3] = {3,3,3};
    int navio4[3] = {3,3,3};

    //Impressão do tabuleiro sem os návios.
    printf("Tabuleiro de Batalha Naval\n");

    printf("   A B C D E F G H I J\n");
    for(int i = 0; i < 10; i++)
    {
        index++;
        (index == 10) ? printf("%d ", index) : printf("%d  ", index);

        for(int j = 0; j < 10; j++)
    {
            printf("%d ", tabuleiro[i][j]);         
    }
        printf("\n");   
    }
    //Posicionamento dos návios inseridos por vetores na horizontal
    //e na vertical.
   for(int i = 1, j = 0; i < 5, j < 3; i++, j++)
   {
       
            tabuleiro[i][7] += navio1[j];     
        
   }

    for(int i = 4, j = 0; i < 5, j < 3; i++, j++)
   {
        tabuleiro[4][i] += navio2[j];
   }
    //Posicionamento dos návios inseridos por vetores na diagonal.
    
   for(int i = 0, j = 0; i < 5, j < 3; i++, j++)
   {
        tabuleiro[i][i] += navio3[j];
   }

    for(int i = 0, j = 0; i < 5, j < 3; i++, j++)
   {
        tabuleiro[8-i][1+i] += navio4[j];
   }

   printf("\n");

    //Impressão do tabuleiro com os návios.
   printf("Tabuleiro de Batalha Naval Posicionado\n");
    printf("   A B C D E F G H I J\n");

    index = 0;

   for(int i = 0; i < 10; i++)
   {
        index++;
        (index == 10) ? printf("%d ", index) : printf("%d  ", index);
        for(int j = 0; j < 10; j++)
   {
       printf("%d ", tabuleiro[i][j]);         
   }
     printf("\n");   
   }






    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
