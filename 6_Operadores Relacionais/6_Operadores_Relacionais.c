#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale

int main(void)
{
    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    int x = 20, y = 5, z = 7, k = 7;
    //A função puts imprime na tela (stdout) uma string especificada, incluindo uma nova linha ('\n') ao final da impressão.
    puts("Os operadores relacionais são usados para fazer comparações");
    puts("Quando o resultado da comparção é FALSO retornam 0 (zero)");
    puts("Quando o resultado da comparção é VERDADE retornam 1 (um)");

    printf("\nValor de x = %d ", x);
    printf("\nValor de y = %d ", y);
    printf("\nValor de z = %d ", z);
    printf("\nValor de k = %d ", k);

    printf("\n\nExemplo 1: x > y: %d ", x > y); //retorna 1 pois é VERDADEIRO
    printf("\nExemplo 2: x < y: %d \n", x < y); //retorna 0 pois é FALSO

    printf("\nExemplo 3: z == k : %d ", z == k); //retorna 1 pois é VERDADEIRO
    printf("\nExemplo 4: z != k : %d \n", z != k); //retorna 0 pois é FALSO
    
    printf("\nExemplo 5: z >= x : %d ", z >= x); //retorna 0 pois é FALSO
    printf("\nExemplo 6: z <= k : %d \n\n", z <= k); //retorna 1 pois é VERDADEIRO
    
    system("pause");

    return 0;
}