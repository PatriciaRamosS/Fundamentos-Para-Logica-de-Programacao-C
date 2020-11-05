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
    printf("Entre com o valor da variável B: \n");
    scanf("%d", &b);


    //Se A for igual  B
    if(a == b)
    {
        printf("As variáveis tem o mesmo valor!!");
    }
    else
    {
        printf("As variáveis não tem o mesmo valor!!");
    }

    return 0;
}