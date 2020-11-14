/*

7. Escreva  uma  função  recursiva  que  retorne  o  máximo  div isor  comum  entre  dois inteiros. 

Utilize o seguinte protótipo: int mdc(int,int);

*/


#include <stdio.h> 
#include <stdlib.h>  

int mdc(int a, int b) 
{     
    if((a % b) == 0)         
        return b;     
    else         
        return mdc(b,a%b); 
}  

int main() 
{     
    int a,b;     
    
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para b: ");     
    scanf("%d", &b);     
    printf("O MDC entre %d e %d e: %d", a, b, mdc(a,b));     
    
    return 0; 
}