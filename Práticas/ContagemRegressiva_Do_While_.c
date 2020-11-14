#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int contandor = 10; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
  while(contandor >= 0) // Testando a condição
  {
    printf("%d \n", contandor); //Executando um comando dentro do laço
    contandor--;
  }  

  return 0; //valor de retorno das função main
}