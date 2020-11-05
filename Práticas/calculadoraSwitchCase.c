#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale

void menu();
void soma();
void subtracao();
void divisao();
void multiplicacao();
void sair();

//Função principal do programa
int main()
{
    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    //Chamada da Função
    menu();
}

void menu(){

    //Definindo Variáveis
    int opcao;

    printf("ESCOLHA UMA DAS OPÇÕES ABAIXO\n");
    printf("0 - SAIR\n");
    printf("1 - SOMA\n");
    printf("2 - SUBTRAÇÃO\n");
    printf("3 - DIVISÃO\n");
    printf("4 - MULTIPLICAÇÃO\n");
    scanf("%d", &opcao);

    //O mesmo código de cima, adaptado ao Switch
    switch(opcao){
    	case 0:
            sair();
            break;
        case 1:
            soma();
            break;
        case 2:
            subtracao();
            break;
        case 3:
            divisao();
            break;
        case 4:
            multiplicacao();
            break;
        default:
            printf("\n Opcao invalida\n\n");
            break;
    }

}

void soma()
{
    float num_1, num_2, resultado;

    printf("Digite dois números para a Soma: \n");
    scanf("%f %f", &num_1, &num_2);
    resultado = num_1+num_2;

    printf("O resultado da Soma eh: %f\n", resultado);
    
}

void subtracao()
{
    float num_1, num_2, resultado;

    printf("Digite dois números para a Subtração: \n");
    scanf("%f %f", &num_1, &num_2);
    resultado = num_1-num_2;

    printf("O resultado da Subtração eh: %f\n", resultado);
    
}

void divisao()
{
    float num_1, num_2, resultado;

    printf("Digite dois números para a Divisão: \n");
    scanf("%f %f", &num_1, &num_2);
    resultado = num_1/num_2;

    printf("O resultado da Divisão eh: %f\n", resultado);
    
}

void multiplicacao()
{
    float num_1, num_2, resultado;

    printf("Digite dois números para a Multiplicação: \n");
    scanf("%f %f", &num_1, &num_2);
    resultado = num_1*num_2;

    printf("O resultado da Multiplicação eh: %f\n", resultado);
}
void sair()
{
	exit(0);
}