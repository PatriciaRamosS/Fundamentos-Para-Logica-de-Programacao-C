#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    char x = 'x';
    char a = 'a';
    char z = 'z';
    char h = 'h';
    char b = 'b';
    char f = 'f';
    char y = 'y';

    //Condicional Simples
    if(x == 'x'){
        printf("\nA letra eh x.");
    }

    //Código em ASCII
    //Quando se defini uma vafriável como char
    //E depois da um printf usando %d na vdd pela o valor da variavel em ASCII
    printf("\nCodigo da letra = %d\n ", x);
    printf("\nCodigo da letra = %d\n ", a);
    printf("\nCodigo da letra = %d\n ", z);
    printf("\nCodigo da letra = %d\n ", h);
    printf("\nCodigo da letra = %d\n ", b);
    printf("\nCodigo da letra = %d\n ", f);
    printf("\nCodigo da letra = %d\n ", y);


    //Pausa o programa após executar
    system("pause");

}
