#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main(void){

    //Definindo Variáveis
    int n1, n2;

    printf("\n Insira a nota 1: ");
    scanf("%d", &n1);
    printf("\n Insira a nota 2: ");
    scanf("%d", &n2);

    if(n1 == n2)
        printf("\n Os números são iguais! \n");
    else
        if(n1 > n2)
            printf("\n O maior valor e = %d\n", n1);
        else
            printf("\n O maior valor e = %d\n", n1);
            
    //Pausa o programa após executar
    system("pause");

    return 0;
}
