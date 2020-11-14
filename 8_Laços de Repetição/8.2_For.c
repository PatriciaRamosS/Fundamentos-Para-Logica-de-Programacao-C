/*
É muito útil quando se sabe de antemão quantas vezes a repetição deverá ser executada.

Este laço utiliza uma variável para controlar a contagem do loop, bem como seu incremento.

Trata-se de um comando bem enxuto, já que própria estrutura faz a inicialização, incremento e encerramento do laço.

Pseudocódigo:
Para (valor inicial até condição_final passo n)faça
Inicio
    Instruções;
Fim;
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a=0; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
  for(a=1 ; a<=10 ; a++) // Testando a condição
  {
    printf("%d \n", a); //Executando um comando dentro do laço
  }  

  return 0; //valor de retorno das função main
}