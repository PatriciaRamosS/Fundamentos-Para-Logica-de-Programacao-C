#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int a = 0; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
  for(a = 100 ; a >= 0; a--) // Testando a condição
  {
    printf("%d \n", a); //Executando um comando dentro do laço
  }  

  return 0; //valor de retorno das função main
}