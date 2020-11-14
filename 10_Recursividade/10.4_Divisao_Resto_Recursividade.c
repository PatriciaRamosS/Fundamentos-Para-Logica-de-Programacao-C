/*

6. Escreva  uma  função  recursiva  que  retorne  um  inteiro  representando  o  resto  da divisão de dois inteiros a/b. 

Utilize o seguinte protótipo: int resto(int,int);

*/

#include <stdio.h> 
#include <stdlib.h>  

int resto(int a, int b) 
{     
    if (a<b)         
        return a;     
    else         
        return resto(a-b,b); 
}   

int main() 
{     
    int a,b;     
    
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para b: ");     
    scanf("%d", &b);     
    printf("O resto da divisão entre %d e %d e %d", a, b, resto(a,b));     
    
    return 0; 
}