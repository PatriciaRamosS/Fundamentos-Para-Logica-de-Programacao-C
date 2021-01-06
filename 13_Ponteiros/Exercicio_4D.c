//D) 

#include <stdio.h> 

int main() 
{     
    int x[]={1,2,3,4,5};     
    int *y[5];     
    int n=5,i;     
    int **p;     
    p=y;     
    
    for (i=0; i<n ; i++)     
    {         
        *(p+i)=&x[i];     
    }     
    for (i=0; i<n ; i++)     
    {         
        printf("%d\n",*(*(p+i)));     
    }     
    return 0; 
}  
/*Resposta:  O  programa  executa  2  loops,  o  primeiro  destina -se  a  informar  o   número  do  índice do  vetor,  
enquanto  o   segundo  informa  o  valor  deste  índice,  assim  o  programa  imprime  uma sequência de 5 índices (de 0 a 4) 
com valores de 1 a 5.*/