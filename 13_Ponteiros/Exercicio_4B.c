#include <stdio.h>  int main () 
{ 
    int x[ ]={1 , 2 , 3 , 4 , 5};  
    int n=5, i; 
    int *p; 
    p=x; 
    
    for (i=0; i<n ; i++) 
    { 
        printf("%d\n" , *(p+ i ) ); 
    } return 0; 
}
//Resposta: Faz um  loop com  5 posições (de 0 a 4), com  valores de 1 a 5.  
//Isto por que o apontador é direciona do para o índice  do vetor. 