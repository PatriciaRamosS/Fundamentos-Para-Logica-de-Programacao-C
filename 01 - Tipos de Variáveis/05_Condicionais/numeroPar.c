#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    //Definindo Variáveis
    int a, b;

    //Lendo os 3 valores
    printf("Entre com o valor da variável A: \n");
    scanf("%d", &a);

    //Caso o resto da divisão da Váriável A seja igual a zero 
    //O número é Par
    if(a%2==0)
    {
        printf("A variável é Par.");
    }
    //Caso o resto da divisão da Váriável A não seja igual a zero 
    //O número é Impar
    else
    {
        printf("A variável é Impar.");
    }

    return 0;
}