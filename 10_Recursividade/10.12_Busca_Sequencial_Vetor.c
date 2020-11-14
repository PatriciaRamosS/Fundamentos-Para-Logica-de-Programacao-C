/*

14. Escreva  uma  função  recursiva  que  faça  a  busca  sequencial  em  um  v etor.  
A  função deve  receber  um  vetor  inteiro,  um  inteiro  representando  o  índice  
do  último elemento  desse  vetor  e  u m  inteiro  correspondente  ao  valor  que  
deve  ser  localizado no vetor. Se o elemento for encontrado a função retorna 1, senão retorna 0. 

Utilize o seguinte protótipo: int busca_sequencial (int [], int, int); 

*/


#include <stdio.h> 
#include <stdlib.h>  

int busca_sequencial(int a[],int b,int c) 
{     
    if (b==0)         
        return 0;     
    else         
    {             
        if (a[b-1]==c)                 
            return 1;             
        else busca_sequencial(a,b-1,c);         
    } 
}

int main() 
{     
    int a[]={2,6,7,10,26,36,38,58};     
    int b=8;     
    int c=26;     
    
    printf("%d", busca_sequencial(a,b,c));     
    return 0; 
}