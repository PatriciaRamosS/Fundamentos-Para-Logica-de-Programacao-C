// C) 

#include <stdio.h> 

int main () 
{     
    int x[]={1,2,3,4,5} ,y[]={6,7,8,9,10};     
    int n=5, i;     
    int *p ,*q;     
    p=x;     
    q=y;     
    
    for(i=0; i<n ; i++)      
        printf("%d\n",*(p+i)+*(q+(n-1-i)));

    return 0; 
    
} 

//Resposta: retorna um loop com 5 posições, todas de valor 11. 
//Isto ocorre devido ao fato que a função soma o primeiro valor do vetor de x, com o último de 
//y: ex.: 1+10=11. Isto ocorre até o valor de n ser menor que 5 (de 0 a 4). 