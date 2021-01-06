#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

retornaBooleano();

int main()
{
    //Definindo variaveis Locais
    bool variavelBooleana;

    //Variavel recebendo booleano
    variavelBooleana = retornaBooleano();

    if(variavelBooleana)
    {
        printf("Eh verdadeiro.");
    }
    else
    {
        printf("Eh falso.");
    }
    

    //retorno da funcao
    return 0;
}

retornaBooleano()
{
    return true;
}