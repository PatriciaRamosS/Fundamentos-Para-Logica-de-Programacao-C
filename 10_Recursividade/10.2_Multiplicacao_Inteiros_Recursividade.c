/*

4. Escreva  uma  função  que  faça  a  multiplicação  de  dois  inteiros  a  x  b,  de  forma recursiva,  
retornando  um  i nteiro  como  resultado.  

Utilize  o  seguinte  protótipo:  int multiplicacao(int,int);

*/

#include <stdio.h> 
#include <stdlib.h>  

int multiplicacao(int a, int b) 
{     
    if (b==0)         
        return b;         
    else 
        return (a+multiplicacao(a,b-1)); 
        
}  

int main() 
{     
    int a, b;     
    
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para ser b: ");     
    scanf("%d", &b);     
    printf("%d * %d = %d", a, b, multiplicacao(a,b));     
    
    return 0; 
}