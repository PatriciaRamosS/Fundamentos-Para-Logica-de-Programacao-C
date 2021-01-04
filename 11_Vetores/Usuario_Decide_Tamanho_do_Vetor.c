#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main (void)
{
    //Definindo as veriaveis locais
    int contador;
    double media, soma=0;
    
    //variavel que sera passada como tamanho do vetor
    int tamanho;
    
    //Entrada que o usuario decide o tamanho do vetor
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    
    //Definindo o Vetor
    float vet[tamanho];
    
    //Laco de repeticao para inserir as notas 
    for(contador=0; contador<tamanho; contador++)
    {
        printf("Digite a nota %d: ", contador);
        scanf("%f", &vet[contador]);

        //Se a nota for maior que zero realiza a soma de todas as notas inseridas
        if(vet[contador]>0)
        {
            //Atribuição da Soma de todas as notas na variavel soma
            soma=soma+vet[contador];
        }
    }
    
    //Condicionais
    //Caso o tamanho seja igual a 0 nao retorna nada
    if(tamanho == 0)
    {
        media = -1;
    }
    else //Senão retorna a media das notas
    {
        //Realiza o calculo da media
        media=soma/tamanho;

        //Resultado da media
        printf("A media final eh: %f", media);
    }
    return 0;
} 