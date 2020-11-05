#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale

void menu();
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
	
	float num_1,num_2;
	
	printf("Digite dois números: \n");
    scanf("%f %f", &num_1, &num_2);

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
            printf("O resultado da Soma eh: %f\n", num_1+num_2);
            break;
        case 2:
            printf("O resultado da Subtração eh: %f\n", num_1-num_2);
            break;
        case 3:
            printf("O resultado da Divisão eh: %f\n", num_1/num_2);
            break;
        case 4:
            printf("O resultado da Multiplicação eh: %f\n", num_1*num_2);
            break;
        default:
            printf("\n Opcao invalida\n\n");
            break;
    }

}

void sair()
{
	exit(0);
}