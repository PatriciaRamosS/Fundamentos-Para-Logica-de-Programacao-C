//Como Escrever na Tela


//Bibliotecas Padrão 
#include <stdio.h>  //Biblioteca padrão para comandos de Entrada / Saída

#include <stdlib.h> //Este cabeçalho define várias funções de propósito geral, 
                    //incluindo gerenciamento de memória dinâmica, geração de números aleatórios, 
                    //comunicação com o ambiente, aritmética de inteiros, pesquisa, classificação e conversão.

#include<locale.h> //necessário para usar setlocale

    //Variáveis Globais
    int   e;        //Variável do tipo int, armazena números inteiros
    float f;        //Variável do tipo float, armazena (real) números que contém casas dedimais 
    char  g;        //Variável do tipo char, armazena caracteres
    double salario; //Variável do tipo float, armazena (real) números que contém casas dedimais 
    bool a = true;  //Variável do tipo bool, armazena variáveis booleanas

void main() //função principal

{//Início do corpo da função principal

    //Variáveis Locais
    int   a = 5;    //Atribuindo Valores as variáveis
    float b = 5.5;  //Atribuindo Valores as variáveis
    char  c = 'p';  //Atribuindo Valores as variáveis

    //Escaneie um valor inteiro no Endereço de memória na variável a 
    scanf("%d", &a);  
    
    //& -> Endereço na memória

    return 0; //valor de retorno das função main

 } //Fim do corpo da função principal e fim do programa