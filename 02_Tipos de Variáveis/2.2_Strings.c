#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char nome[20]; //String é uma variável que armazena uma cadeia de caracteres

    printf("Digite seu nome: ");
    scanf("%s", nome); //No caso de variáveis do tipo vetor ("Strings", Caracteres) não é necessário utilizar o &

    printf("O armazenamento foi: %s", nome);

    return 0;
}