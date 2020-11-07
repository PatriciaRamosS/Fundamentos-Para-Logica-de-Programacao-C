//Como Escrever na Tela


//Bibliotecas Padrão 
#include <stdio.h>  //Biblioteca padrão para comandos de Entrada / Saída

#include <stdlib.h> //Este cabeçalho define várias funções de propósito geral, 
                    //incluindo gerenciamento de memória dinâmica, geração de números aleatórios, 
                    //comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.

#include<locale.h> //necessário para usar setlocale

void main() //função principal

{//Início do corpo da função principal

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    //Variáveis Locais
    int a = 5;
    float b = 5.5;
    char c = 'p';


    //Escrever Oi Galera!
    printf("Oi Galera!");

    //Escrever o valor de uma variável a
    printf("%d", a);

    //Escrever Um texto misturado com uma variável
    printf("O valor de a = %d", a);

    //Escrever um texto e pular linha (\n)
    printf("Oi Galera! \n Aqui estou em outra linha");

    //Inteiros
    printf("%d", a);

    //Float
    printf("%f", b);

    //Char
    printf("%c", c);

    //ATENÇÃO PARA LIMPEZA DE BUFFER
    fflush(stdin);//Antes de ler uma variável char 


    return 0; //valor de retorno das função main

 } //Fim do corpo da função principal e fim do programa