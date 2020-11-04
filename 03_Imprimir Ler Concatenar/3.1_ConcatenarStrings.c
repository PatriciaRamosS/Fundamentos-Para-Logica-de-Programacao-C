#include <stdio.h>
#include <stdlib.h>
#include<locale.h> //necessário para usar setlocale

//Função principal do programa
void main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    char str[11]="Curso";

    //Concatenar a string " de C" com o conteúdo da string str
    //Sintaxe
    //strcat(string_destino, string_origem);
    strcat(str, " de C");

    //Será exibido "Curso de C"
    printf("%s", str);

    return 0;
}