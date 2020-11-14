/*

15. Escreva  uma  função  recursiva  que  faça  a  busca  binária  em  um  vetor.  
A  função  deve receber  um  vetor  inteiro,  um  inteiro  representando  o  índice  
do  último  elemento desse  vetor  e  um  inteiro  correspondente  ao  valor  que  
deve  ser  localizado  no  vetor. Se o  elemento f or encontrado a  f unção retorna 1 ,  senão retorna 0.  

Uti lize o  seguinte protótipo: int busca sequencial (int [], int, int);

*/

#include <stdio.h> 
#include <stdlib.h>  

int busca_binario(int v[], int x, int n) 
{     
    if (n<=0)         
        return 0;     
    else     
    {         
        int meio = n/2;         
        
        if (x<v[meio])
            return busca_binario(v,x, meio);         
        else if (x>v[meio])         
        {             
            return busca_binario(&v[meio+1],x,n-1-meio);         
        }         
        else             
            return 1;     
    } 
} 

/*--------- Com 4 variáveis */

 int busca_binaria(int a[],int b,int c,int d)  
 { 
    if (c < b) 
        return 0;  
        
    int m= (b + c)/2;  
    
    if (d < a[((b + c)/2)])   
        return busca_binaria(a, b, ((b + c)/2)-1, d);  
    else if (d > a[((b + c)/2)])   
        return busca_binaria(a, ((b + c)/2)+1, c, d);  
    else if (d == a[((b + c)/2)]) 
        return 1;  
}

int main () 
{     
    int v[]={1,5,6,8,9};     
    int n=5;     
    int x;  

    //TESTE NAO SEI SE ESTÁ CORRETO
    int a[]={3,6,8,5,4,7,2,1};
    int b=8, c, d; 
    
    printf("Digite um numero na sequencia {1,5,6,8,9}: ");     
    scanf("%d", &x);     
    printf("busca_binario = %d", busca_binario(v, x, n));    

    printf("busca_binaria = %d", busca_binaria(a, b, c, d));  
    
    return 0; 
    
}  

