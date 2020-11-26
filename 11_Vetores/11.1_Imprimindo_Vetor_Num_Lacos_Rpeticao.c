#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função Principal
void main ()
{
    //Definindo o Vetor
    int vetor[TAM];
    int cont;

    vetor[0] = 2;
    vetor[1] = 56;
    vetor[2] = 48;

    for(cont=0; cont<TAM; cont++)
    {
        printf("\n Posição [%d]: %d\n", cont, vetor[cont]);
    }
    
    system("pause");
} 