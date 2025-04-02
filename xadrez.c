#include <stdio.h>

    // Desafio de Xadrez - MateCheck
    // Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
    // O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    

int main() { 

    int i = 1;
    int l = 1;
    int n = 1;
    int casas = 5;

    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    while (i <= casas) //movimento torre
    {
        printf("Torre: (Direita)\n"); 
        i++;
    }
    

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    for (int j = 0; j < casas ; j++) //movimento bispo
    {
        printf("Bispo: (Cima, Direita)\n");
    
    }

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    do
    {
        printf("Rainha: (Esquerda)\n"); // movimento Rainha
        l++;

    } while (l <= 8);
    

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    printf("\n");

    for (int m = 1; m <= 1; m++) // movimento cavalo
    {
        while (n <= 2) 
        {
            printf ("Cavalo : (Baixo)\n");
            n++;
        }
         printf ("Cavalo : (Esquerda)\n");
    
    }
    
    
    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
