#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //necessário para usar setlocale
#include <string.h>

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    char str1[11]="Curso";
    char str2[20]=" de programação em C";


    //Sintaxe:
    //strncat(string_destino, string_origem, tamanho);

    //Concatena a str1 com 15 posições da str2
    //Realiza a concatenação do conteúdo de uma variável a outra,
    //porém, deve ser especificado o tamanho a ser concatenado.
    //Ambas devem ser strings.        
    strncat(str1, str2, 15);

    //Será exibido "Curso de C"
    printf("%s", str1);

    return 0;
}