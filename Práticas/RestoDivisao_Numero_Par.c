/*
    Autor(a): Patrícia da Silva Ramos

    Definição: Algoritmo que imprima os números
    pares de 10 a 20 (usando While, Do While, For)
*/

#include <stdio.h>
#include <locale.h> //necessário para usar setlocale

//Função principal do programa
int main()
{

    // Utilizamos a função setlocale() para fazer a adaptação do programa ao idioma desejado.
    setlocale(LC_ALL, "Portuguese");

    //Definindo Variáveis
    int a=10;
    
    printf("Utilizando For\n\n");

    for(a=10; a<=20; a++)
    {
        //Caso o resto da divisão da Váriável A seja igual a zero 
        //O número é Par
        if(a%2==0)
        {
            printf("%d\n", a);
        }
    }
    
    printf("\n\nUtilizando Do While\n\n");
    
    int b=10;
    
    do
	{
        //Caso o resto da divisão da Váriável A seja igual a zero 
        //O número é Par
        if(b%2==0)
        {
            printf("%d\n", b);
        }
        b++;
    }while(b<=20);
    
    
    printf("\n\nUtilizando While\n\n");
    
    int c=10;
    
    while(c<=20)
	{
        //Caso o resto da divisão da Váriável A seja igual a zero 
        //O número é Par
        if(c%2==0)
        {
            printf("%d\n", c);
        }
        c++;
    }

    return 0;
}