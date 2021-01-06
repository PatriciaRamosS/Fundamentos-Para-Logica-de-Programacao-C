#include <stdlib.h>
#include <stdio.h>

void meuSucessor(int numero)
{
    printf("\nO sucessor de %d eh %d", numero, numero+1);
}

int retornaAntecessor(int numero)
{
    return (numero - 1);
}

int main()
{
    //Definindo variaveis Locais
    int a;

    //Entrada de dados
    puts("Digite um valor: ");
    scanf("%d", &a); //Leitura dos dados

    //Chamada da função
    meuSucessor(a);

    printf("\nO antecessor de %d eh %d", a, retornaAntecessor(a));

    //retorno da funcao
    return 0;
}