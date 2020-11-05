#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale


//Função principal do programa
void main(){

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "");

    //Definindo Variáveis
    int a = 6, b = 4;

    //Soma
    printf("\n A soma de %d e %d = %d",a , b, a + b);

    //Subtração
    printf("\n A subtração de %d e %d = %d",a , b, a - b);

    //Divisão
    printf("\n A divisão de %d e %d = %d",a , b, a / b);

    //Multiplicação
    printf("\n A multiplicação de %d e %d = %d",a , b, a * b);

    //Resto da Divisão
    printf("\n O resto da divisão entre %d e %d = %d",a , b, a % b);

    //Valor Absoluto
    printf("\n O valor absoluto de -3 = %d", abs(-3));

    //Pausa o programa após executar
    system("pause");

}