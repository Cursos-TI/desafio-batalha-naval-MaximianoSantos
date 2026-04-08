#include <stdio.h>

#define linha 10
#define coluna 10

int main() {
    //Área para declaração de variaveis.
    int index = 0;
    
    
    //Área para declaração das matrizes.
    int tabuleiro [linha][coluna] = {
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
    //int navio1[3] = {3,3,3};
    //int navio2[3] = {3,3,3};
    //int navio3[3] = {3,3,3};
    //int navio4[3] = {3,3,3};
    

    //Impressão do tabuleiro sem os návios.
    printf("Tabuleiro de Batalha Naval\n");

    printf("   A B C D E F G H I J\n");
    for(int i = 0; i < linha; i++)
    {
        index++;
        (index == 10) ? printf("%d ", index) : printf("%d  ", index);

        for(int j = 0; j < coluna; j++)
    {
            printf("%d ", tabuleiro[i][j]);         
    }
        printf("\n");   
    }
    /*Posicionamento dos návios inseridos por vetores na horizontal
    e na vertical.*/
    /*for(int i = 1, j = 0; i < 5, j < 3; i++, j++)
    {
       
             tabuleiro[i][7] += navio1[j];     
        
   }

    for(int i = 4, j = 0; i < 5, j < 3; i++, j++)
   {
        tabuleiro[4][i] += navio2[j];
   }
    Posicionamento dos návios inseridos por vetores na diagonal.
    
   for(int i = 0, j = 0; i < 5, j < 3; i++, j++)
   {
        tabuleiro[i][i] += navio3[j];
   }

    for(int i = 0, j = 0; i < 5, j < 3; i++, j++)
   {
       tabuleiro[8-i][1+i] += navio4[j];
    }

   printf("\n");

    Impressão do tabuleiro com os návios.
    printf("Tabuleiro de Batalha Naval Posicionado\n");
    printf("   A B C D E F G H I J\n");

    index = 0;

   for(int i = 0; i < 10; i++)
   {
        index++;
        (index == 10) ? printf("%d ", index) : printf("%d  ", index);
        for(int j = 0; j < 10; j++)
/{
       printf("%d ", tabuleiro[i][j]);         
    }
     printf("\n");   
   }*/

   //Área para implementação de poderes especiais.

   //Cone.  
   for(int i = 0; i < linha; i++ )
   {
        for(int j = 0; j < coluna; j++)
        {                   
          if(i == 0 && j==2 || i == 1 && j > 0 && j < 4 || i == 2 && j >= 0 && j <= 4)
          {
            tabuleiro[i][j] = 1;
          }                                 
        }
    
    printf("\n");    
   }
   //Cruz.    
   for(int i = 0; i < linha; i++ )
   {
        for(int j = 0; j < coluna; j++)
        {           
          
          if(i == 7 && j == 7 || i == 8 && j >= 5 && j <= 9 || i == 9 && j == 7)
          {
            tabuleiro[i][j] = 4;
          }                    
        }
        printf("\n");
   }
   //Octaedro.   
   for(int i = 0; i < linha; i++ )
   {
        for(int j = 0; j < coluna; j++)
        {           
          
          if(i == 4 && j == 3 || i == 5 && j >= 2 && j <= 4 || i == 6 && j == 3)
          {
            tabuleiro[i][j] = 5;
          }               
        }
        printf("\n");
   }
   printf("\n");
   
   
   printf("Tabuleiro de Batalha Naval com poderes\n");
    printf("   A B C D E F G H I J\n");

    index = 0;

   for(int i = 0; i < linha; i++)
   {
        index++;
        (index == 10) ? printf("%d ", index) : printf("%d  ", index);
        for(int j = 0; j < coluna; j++)
   {
       printf("%d ", tabuleiro[i][j]);         
   }
     printf("\n");   
   }

   

   
    return 0;
}
