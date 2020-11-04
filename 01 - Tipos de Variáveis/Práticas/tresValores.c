#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    //Definindo Variáveis
    int numUm, numDois, numTres, resultado = 0;

    //Lendo os 3 valores
    printf("Entre com o os três valores: \n");
    scanf("%d %d %d", &numUm, &numDois, &numTres);

    //Exibindo o resultado
    printf("Valor  = %d", resultado = abs(numUm * numDois * numTres));

    return 0;
}