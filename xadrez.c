#include <stdio.h>

    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
   
    void mover_torre(int casa_torre) { // Movimento da Torre
        if (casa_torre > 0) {
            printf("Torre : (Direita)\n");
            mover_torre(casa_torre - 1);
        }
    
            
    }


    void mover_bispo() // recursividade Bispo

        { 
           printf("Direita)\n");
        }



    void mover_rainha(int casa_rainha) { // recursividade Rainha
        if (casa_rainha > 0) {
            printf("Rainha : (Esquerda)\n");
            mover_rainha(casa_rainha - 1);
        }
    
            
    }


    

int main() { 

    //int i = 1;  
    //int l = 1;
    //int n = 1;
    //int casas = 5;

    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

   /* while (i <= casas) //movimento torre/loop com while
    {
        printf("Torre: (Direita)\n"); 
        i++;
    }
   */


    char quantidade = 10; // Movimento Torre
    mover_torre(quantidade);

    printf("\n");

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    
    /*for (int j = 0; j < casas ; j++) //movimento bispo
    {
        printf("Bispo: (Cima, Direita)\n");
    
    }

    */

    
    for (int o = 0; o < 5; o++) //Movimento Bispo
    {
        
        printf("Bispo: (Cima, "); 

        for (int p = 0; p < 1; p++)
        {
         mover_bispo();
        }
    
    }

    printf("\n");

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

   
   /* do
    {
        printf("Rainha: (Esquerda)\n"); // movimento Rainha
        l++;

    } while (l <= 8);

    */

    char quantidade_3 = 8; //Movimento rainha
    mover_rainha(quantidade_3);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n");

   /* for (int m = 1; m < 2; m++ ) // movimento cavalo

    {
         for (int n = 0; n < 2; n++)
        {
            printf ("Cavalo : (Baixo)\n");
        }   

        printf ("Cavalo : (Esquerda)\n");
    }

    */

    for (int m = 0, n = 1; m < n; m++, n--) //Movimento Cavalo
    {
        for (int j = 0, l = 2;  j < l; j++)
        {
            printf("Cavalo : (Cima)\n");
            
        }
        
        printf("Cavalo : (Direita)\n");

      
    }
        


    printf("\n");



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
