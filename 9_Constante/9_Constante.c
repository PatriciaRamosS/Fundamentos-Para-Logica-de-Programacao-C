/*

Constantes são usadas para armazenar valores que NÃO podem ser modificadas durante a execução de um programa.

Uma constante precisa ser declarada, e para tanto usamos a diretiva de pré-processador #define.

Sintaxe:
#define <nome_da_constante> <valor>

A declaração da constante deve ser feita no início do programa.

É extremamente recomendável utilizar letras maiúsculas ao declarar uma constante.

Declarando as constantes como maiúsculas podemos facilmente diferenciá-las das variáveis que por convenção devem ser declaradas em letras minúsculas.

*/

#include <stdio.h>
#include <stdlib.h>

#define TAM 10

int main(void)
{
    int contador;

    printf("%d\n\n\n", TAM);

    for(contador=1; contador<=TAM; contador++)
    {
        printf("%d\n", contador);
    }
    return 0;
}