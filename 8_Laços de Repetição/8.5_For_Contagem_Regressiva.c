#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int contador; //declarando e inicializando a variável de controle
    int num, multiplicacao;

    //For(Valor_Que_Começará ; Valor_Final)
    printf("Digite um numero: ");
    scanf("%d", &num);

    for(contador=100 ; contador>0 ; contador--) // Testando a condição
    {
        //Numero inserido * contando 
        multiplicacao = num * contador;
        printf("%d X %d = %d \n", num, contador, multiplicacao); //Executando um comando dentro do laço
    }  

    return 0; //valor de retorno das função main
}