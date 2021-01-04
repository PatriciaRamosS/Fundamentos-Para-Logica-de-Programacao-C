#include <stdio.h>
#include <stdlib.h>
#define TAM 3

//Função Principal
void main ()
{
    //Definindo o Vetor
    int vetor[TAM];

    //Variavel contador
    int cont;

    //Passando valor 2 para o vetor no indice zero
    vetor[0] = 2;

    //Passando valor 56 para o vetor no indice um
    vetor[1] = 56;

    //Passando valor 48 para o vetor no indice dois
    vetor[2] = 48;

    for(cont=0; cont<TAM; cont++)
    {
        //adicionando 1 para cada posicao antes de imprimir
        vetor[cont] = vetor[cont] + 1;
        printf("%d\n", vetor[cont]);
    }
    
    system("pause");
} 