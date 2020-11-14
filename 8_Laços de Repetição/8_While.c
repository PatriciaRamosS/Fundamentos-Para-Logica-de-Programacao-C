/*

Sintaxe:

 Iniciar a variável de controle
 Enquanto (condição) faça
 Início
    Instruções;
    Atualizar a variável de controle;
 Fim;


Pseudocódigo:
 while (condição)
{
Instrução ou bloco de instruções;
}

*/

#include <stdio.h>
int main(void)
{
  int a = 0; //declarando e inicializando a variável de controle
  
  while (a <= 50) // Testando a condição
  {
    printf("%d \n", a); //Executando um comando dentro do laço
    
    a++; //a = a + 1;
  }  
  return 0; //valor de retorno das função main
}