/*

10. Escreva  uma  função  recursiva  que  retorne  a  média  de  um  vetor.  
A  função  deve receber  um  vetor  de  números  reais  e  um  inteiro  representando  
o  índice  do  último elemento do respectivo vetor. 

Utilize o seguinte protótipo: float media (float [],int);

*/


#include <stdio.h> 
#include <stdlib.h>  

float media(float a[], int b) 
{     
    float x;     
    
    if (b == 1)         
        return (a[0]);         
        x = media(a,b-1);     
    return ((x*(b-1)+a[b-1])/b); 
}  

int main() 
{     
    float a[]={6.5,7.3,7.5,6.7};     
    int b=4;     
    
    printf("%f", media(a,b));     
    
    return 0; 
} 