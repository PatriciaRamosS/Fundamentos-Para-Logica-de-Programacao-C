#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Função principal do programa
void main(){

   //Responsável por alimentar o rand de forma diferente
   srand((unsigned)time(NULL));

   //Variável que recebe o resto da divisão do número por 1001 (aleatorio entre 0 e 1000)
   int aleatorio = rand() % 1001;

   printf("1 - %d\n\n", aleatorio);


   //Variável que recebe o resto da divisão do número por 52 (aleatorio entre 1 e 52)
   int aleatorioSegundo = (rand() % 52) + 1;

   //Imprime o valor
   printf("2 - %d\n\n", aleatorioSegundo);

    //Variável que recebe o resto da divisão do número por 17 (aleatorio entre 1 e 17)
   int aleatorioTerceiro = (rand() % 17) + 1;

   //Imprime o valor
   printf("3 - %d\n\n", aleatorioTerceiro);

   //Pausa o programa após executar
   system("pause");

}
