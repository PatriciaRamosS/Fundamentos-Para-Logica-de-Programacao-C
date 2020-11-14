/*

11. Escreva  uma  função  recursiva  que  retorne  o  fatorial  de  um  número  i nteiro.   

Uti lize  o seguinte protótipo: int fatorial(int);

*/

#include <stdio.h> 
#include <stdlib.h>  

int fatorial(int n) 
{  
    if(n==1)       
        return n;   
    return (n*fatorial(n-1)); 
    
}  

int main() 
{     
    int a;     
    
    printf("Digite um numero: ");     
    scanf("%d", &a);     
    printf("O fatorial de %d e %d", a, fatorial(a));     
    
    return 0; 
}