#include <stdio.h>
#include <stdlib.h>

int main(void)
{

  printf("\n\nWhile 0 a 10\n\n");

  int a = 0; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
  for(a = 10 ; a >= 0; a--) // Testando a condição
  {
    printf("%d \n", a); //Executando um comando dentro do laço
  }  

  printf("\n\nWhile 10 a 0\n\n");

  int cont=10;

    //For(Valor_Que_Começará ; Valor_Final)
  for(cont = 0 ; cont <= 10; cont++) // Testando a condição
  {
    printf("%d \n", cont); //Executando um comando dentro do laço
  }  


  printf("\n\nWhile 0 a -10\n\n");

  int cont_1=-10;

    //For(Valor_Que_Começará ; Valor_Final)
  for(cont_1 = 0 ; cont_1 >= -10; cont_1--) // Testando a condição
  {
    printf("%d \n", cont_1); //Executando um comando dentro do laço
  }  

  return 0; //valor de retorno das função main
}