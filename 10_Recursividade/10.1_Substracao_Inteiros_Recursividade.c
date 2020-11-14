/*

3. Escreva  uma  função  que  faça  a  subtração  de  dois  inteiros  a  -  b,  de  forma  recursiva, 
retornando  um  inteiro  como  resultado.  


Utilize  o  seguinte  protótipo:  int subtracao(int,int);

*/


#include <stdio.h>  
#include <stdlib.h>  

int subtracao(int a, int b) 
{     
    if (b==0)         
        return a;         
    else 
        return subtracao(a-1,b-1);
}  

int main() 
{     
    int a, b;     
    printf("Digite um valor para a: ");     
    scanf("%d", &a);     
    printf("Digite um valor para ser b: ");    
    scanf("%d", &b);     
    printf("%d - %d = %d", a, b, subtracao(a,b));     
    return 0; 
}