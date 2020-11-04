//Como Escrever na Tela


//Bibliotecas Padrão 
#include <stdio.h>  //Biblioteca padrão para comandos de Entrada / Saída

#include <stdlib.h> //Este cabeçalho define várias funções de propósito geral, 
                    //incluindo gerenciamento de memória dinâmica, geração de números aleatórios, 
                    //comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.

#include<locale.h> //necessário para usar setlocale

    //Variáveis Globais
    int   e = 47;
    float f = 6.84;
    char  g = 'B';

void main() //função principal

{//Início do corpo da função principal

    //Variáveis Locais
    int   a = 5;
    float b = 5.5;
    char  c = 'p';

    //Escaneie um valor inteiro no Endereço de memória na variável a 
    scanf("%d", &a); 
    
    //& -> Endereço na memória

    return 0; //valor de retorno das função main

 } //Fim do corpo da função principal e fim do programa