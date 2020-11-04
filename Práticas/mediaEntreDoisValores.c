#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    double valor_1, valor_2, media;

    scanf("%lf %lf", &valor_1, &valor_2);

    media = ((valor_1+valor_2)/2);

    printf("Media = %lf", media);

    return 0;
}