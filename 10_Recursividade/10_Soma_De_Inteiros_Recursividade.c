/*

Link original: https://www.passeidireto.com/arquivo/65182773/lista-resolvida-recursao


1. Explique com suas próprias palavras o que é recursão.  É uma função que chama a se  próprio para encontrar determinado valor.

É uma função que chama a se  próprio para encontrar determinado valor. 


 2. Escreva  uma  função  que  faça  a  soma  de  dois  inteiros  a  +  b,  de  forma  recursiva, 
 retornando  um  inteiro  como  resultado. 
 
Utilize  o  seguinte  protótipo:  int soma(int,int);

 */


#include <stdio.h> 
#include <stdlib.h>  

int soma(int a, int b) 
{     
    if (b==0)         
        return a;         
    else 
        return soma(a+1,b-1); 
    
}  

int main() 
{     
    int a, b;     
    
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para ser b: ");     
    scanf("%d", &b);     
    printf("%d + %d e %d", a, b, soma(a,b));     
    
    return 0; 
    
}