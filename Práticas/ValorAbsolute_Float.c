#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    float num_1, num_2;

    printf("Entre com o primeiro valor: ");
    scanf("%f", &num_1);
    printf("Entre com o segundo valor: ");
    scanf("%f", &num_2);

    //Será exibido "Curso de C"
    printf("Valor  = %f", (num_1 - num_2));
    printf("\nValor Absoluto  = %f", fabsf(num_1 - num_2));

    return 0;
}