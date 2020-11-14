/*

16. Escreva uma função recursiva que ordene um vetor inteiro de forma não decrescente utilizando o  algoritm o  quicksort.  
A  função  deve  receber  um   v etor  inteiro,  um  inteiro representando  o  índice  do  primeiro  elemento  desse  vetor  
e  um  inteiro representando  o  índice  de  seu  último  elemento.  A  função  deve  modificar  o  vetor recebido,  e  portanto  
não  será  necessário  retornar  nenhum  valor.  


Utilize  o  seguinte protótipo: void quicksort(int [], int, int);

*/


#include <stdio.h> 
#include <stdlib.h>  

void quicksort( int a[], int b, int c) 
{    
    int x; // 1    
    
    if (b < c)     
    {  // 2       
        c = separa( a, b, c);   // 3
        quicksort( a, b, x-1);  // 4       
        quicksort( a, x+1, c);  // 5    
    } 
}