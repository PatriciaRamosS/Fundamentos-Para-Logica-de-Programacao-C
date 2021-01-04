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
        //O resultado sera a posicao que e a variavel cont
        //O cont corresponde ao indíce de cada posição de cada variével
        printf("\n Posicao [%d]: %d\n", cont, vetor[cont]);
    }
    
    system("pause");
} 