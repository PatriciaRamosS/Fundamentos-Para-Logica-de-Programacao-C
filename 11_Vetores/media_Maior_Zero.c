#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main (void)
{
    //Definindo o Vetor
    float vet[3];
    int contador;
    double media, soma=0, aux=0;

    for(contador=0; contador<3; contador++)
    {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &vet[contador]);
        if(vet[contador]>0){
            soma=soma+vet[contador];
            aux++;
        }
    }

    for(contador=0; contador<3; contador++)
    {
        printf("Nota[%d] = %f\n", contador, vet[contador]);
    }

    if(aux == 0)
    {
        media = -1;
    }else{
        media=soma/aux;
        printf("A media final eh: %f", media);
    }
    return 0;
} 