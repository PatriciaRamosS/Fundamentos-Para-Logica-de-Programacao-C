/*

19. Escreva  uma  função  recursiva  para  determinar  se  os  elementos  de  um  vetor  
inteiro formam  um  palíndromo.  Sua  função  recebe  um  v etor  inteiro  e  um  inteiro 
representando o índice do último elemento do referido vetor. Exemplo, v =[1; 20; 30; 20;  1]    
é  palíndromo  (retornar  1)  e  w  =  [20;  30;  31;  20]  não  é  (retornar  0).  

Utilize  o seguinte protótipo: int palindromo(int [], int); 

*/

#include <stdio.h> 
#include <stdlib.h>  

int palidromo(int a[], int b) 
{     
    if (b<=1)         
        return 1;     
    if (a[0]==a[b-1])         
        return palidromo(a+1,b-2);     
    else         
        return 0; 
} 

int main() 
{     
    int a[]={5,0,2,2,0,5};     
    int b=6;     
    
    printf("%d",palidromo(a,b));    

    return 0; 
} 