/*

5. Escreva  uma  função  que  calcule  o  piso  da  divisão  de  dois  inteiros  [a/b],  de  forma recursiva,  
retornando  um  i nteiro  como  resultado.  

Utilize  o  seguinte  protótipo:  int divisao(int,int);

*/


#include <stdio.h> 
#include <stdlib.h>  

int divisao(int a, int b) 
{     
    int c;     
    
    if (a<b)     
    {         
        c=0;     
    }     
    
    else if (b==0)     
    {         
        printf("Divisao impossivel (retorna erro) \n");     
    }     
    else     
    {       
        c=1+divisao(a-b,b);     
    }     return c; 
    
}  

int main() 
{     
    int a, b;     
    
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para ser b: ");     
    scanf("%d", &b);     
    printf("%d / %d = %d", a, b, divisao(a,b));     
    return 0; 
} 