#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int contandor = 0; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
   // Testando a condição
    do
    {
        printf("%d \n", contandor); //Executando um comando dentro do laço
        contandor++;
    } while(contandor <= 10);

    int i = 10; //declarando e inicializando a variável de controle
    printf("\n\nWhile 0 a 10\n\n");
    //For(Valor_Que_Começará ; Valor_Final)
    // Testando a condição
    do
    {
        printf("%d \n", i); //Executando um comando dentro do laço
        i--;
    } while(i >= 0);

  return 0; //valor de retorno das função main
}

//OU

/*

int main(void)
{
  int contandor = 10; //declarando e inicializando a variável de controle
  
  //For(Valor_Que_Começará ; Valor_Final)
   // Testando a condição
    do
    {
        printf("%d \n", contandor); //Executando um comando dentro do laço
        contandor--;
    } while(contandor >= 0);

  return 0; //valor de retorno das função main
}

*/