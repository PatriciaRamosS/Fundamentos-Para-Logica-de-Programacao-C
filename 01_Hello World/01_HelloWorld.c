/*Como Usar Acentos*/


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

    //Resultado
    printf("Olá Mundo"); 

    system("pause"); //Pausa da Tela - Somente para Windows
                     //Para se utilizar system("pause"); é nescessário 
                     //incluir a biblioteca #include <stdlib.h>


    return 0; //valor de retorno das função main

 } //Fim do corpo da função principal e fim do programa
