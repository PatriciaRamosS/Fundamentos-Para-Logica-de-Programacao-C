//E) 

#include <stdio.h> 

int maior (int x, int y) 
{ 
    if (x>y) 
        return x;     
    else 
        return y ; 
} 

int main () 
{     
    int a=6, b=8;     
    int (*f) ();     
    f=maior;     
    
    printf ("%d\n",f(a,b));     
    return 0 ; 
    
} 
//Resposta: 8, o ponteiro f, remete a função maior, que retorna o maior valor de duas variáveis. 