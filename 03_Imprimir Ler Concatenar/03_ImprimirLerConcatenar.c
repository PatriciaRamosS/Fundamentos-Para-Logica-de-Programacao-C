//Como Escrever na Tela


//Bibliotecas Padrão 
#include <stdio.h>  //Biblioteca padrão para comandos de Entrada / Saída

#include <stdlib.h> //Este cabeçalho define várias funções de propósito geral, 
                    //incluindo gerenciamento de memória dinâmica, geração de números aleatórios, 
                    //comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.

#include<locale.h> //necessário para usar setlocale

void main() //função principal

{//Início do corpo da função principal

    //Definindo uma variável
    int a = 5, b;

    //Imprimindo a variável "a"
    printf("%d", a);

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Mudando o valor de "a"
    a = 15;

    //Concatenando
    printf("\nO valor da var a eh: %d", a);

    //Lendo valores
    scanf("%d", &b);

    //Concatenando
    printf("\nO valor da var b eh: %d", b);

    //Pula linhas
    printf("\n");

    //Imprimindo
    printf("Uhuu");

    //Pausando
    system("pause");

 } //Fim do corpo da função principal e fim do programa