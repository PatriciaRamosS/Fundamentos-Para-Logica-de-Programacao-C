/*

18. Escreva uma função recursiva para calcular a soma dos dígitos de um inteiro positivo. 
Por exemplo, a soma  dos dígitos de 345 é  12. Sua função recebe um  inteiro e retorna a  
respectiva  soma,  também  no  formato  inteiro. 

Utilize  o  seguinte  protótipo:  int digitos(int);

*/


#include <stdio.h> 
#include <stdlib.h>  

int digito(int a) 
{     
    int b,c;     
    b = a%10;     
    c = (a - b)/10;     
    if (c <= 0)         
        return a;     
    else         
        return b + digito(c); 
        
}   
int main() 
{     
    int a;     
    printf("Digite um numero: ");     
    scanf("%d", &a); 
    printf("A soma dos digitos do numero %d e %d", a, digito(a));     
    
    return 0;
}