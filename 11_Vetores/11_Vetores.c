/*

Vetores ou arranjo unidimensional

Um arranjo unidimensional, também chamado de vetor ou simplesmente arranjo, é uma estrutura que permite armazenarum conjunto de 
elementos de um mesmo tipo de dados. Os elementos de um arranjo são armazenados contiguamente na memória, ou seja, ocupam endereços 
de memória adjacentes. A Figura 1 ilustra um arranjo de inteiros, contendo 5 elementos. Assumindo que o tipo de dados int ocupa 4 bytes, 
o primeiro elemento está armazenado no endereço 484, o segundo elemento está armazenado no endereço 488, e assim sucessivamente.

*/
#include <stdio.h>
#include <stdlib.h>

//Função Principal
void main ()
{
    //Definindo o Vetor
    int vetor[3];

    vetor[0] = 7;
    vetor[1] = 56;
    vetor[2] = 48;

    printf("\n Posição 0: %d\n", vetor[0]);
    printf("\n Posição 1: %d\n", vetor[1]);
    printf("\n Posição 2: %d\n\n\n", vetor[2]);
    
    system("pause");
}