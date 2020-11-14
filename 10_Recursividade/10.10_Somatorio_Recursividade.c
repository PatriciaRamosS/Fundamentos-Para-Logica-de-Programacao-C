/*

12. Escreva uma função recursiva que receba um inteiro n e calcule o seguinte somatório somatório n i = 1. 

Utilize o seguinte protótipo: int somatorio(int);

*/

#include <stdio.h> 
#include <stdlib.h>  

int soma(int n) 
{    
    if(n == 1)         
        return 1;     
    else         
        return ( n + soma(n-1) ); 
}  

int main() 
{     
    int n;     
    
    printf("Digite um valor: ");     
    scanf("%d", &n);     
    printf("O somatario de %d reduzindo uma unidade ate chegar em 1 e: %d",n, soma(n));     
    
    return 0; 
}