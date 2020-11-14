//F) 

#include <stdio.h> 

int mensagem(char msg[]) 
{     
    printf ("%s \n",msg); 
} 

int main () 
{     
    char a[]="Hello World!";     
    int (*f) ();     
    f=mensagem;     
    f(a);     
    
    return 0; 
}  

/*Resposta:  Hello  World!.  Isto  porque  o   ponteiro  f  aponta  para  a  função  mensagem  que corresponde a um 
vetor de caracteres, que foi atribuído o conteúdo Hello World!*/