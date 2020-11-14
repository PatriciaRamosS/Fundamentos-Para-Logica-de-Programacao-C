/*

9. Escreva uma função recursiva que retorne o mínimo elemento de um vetor. 
A função deve  rec eber  um  vetor  de  inteiros  e  um  inteiro  representando  
o  índice  do  último elemento do respectivo vetor. 

Utilize o seguinte protótipo: int min(int[],int); 

*/


#include <stdio.h> 
#include <stdlib.h>  

int min(int a[], int b) 
{     
    if (b == 1)         
        return a[0];     
    else         
    {         
        int x;         
        
        x = min(a, b-1);        
        
        if (x < a[b-1])             
            return x;         
        else             
            return a[b-1];         
    } 
}     

int main() 
{     
    int a[6]={5,6,8,9,7,9};     
    int b=6;     
    
    printf("%d", min(a,b));  

    return 0; 
}