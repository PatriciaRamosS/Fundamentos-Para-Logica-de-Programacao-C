/*

13. Escreva uma função recursiva que receba um inteiro n  e calcule  o log2 n, ou seja, o piso do logaritmo de n na base 2. 

Utilize o seguinte protótipo: int log2(int);

*/


#include <stdio.h> 
#include <stdlib.h>  

int log2(int a)
{       
    if (a==1)         
        return 0;       
    return (1 + log2(a/2)); 
}

int main() 
{     
    int n;     
    
    printf("Digite uma valor para calcular o logaritimo na base 2: ");     
    scanf("%d", &n);     
    printf("O log de %d na base 2 e: %d", n, log2(n));     
    
    return 0; 
}
