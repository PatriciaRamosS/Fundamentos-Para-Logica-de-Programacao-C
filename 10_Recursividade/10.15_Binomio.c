/*

Utilize o seguinte protótipo: int binomio(int, int);

*/


#include <stdio.h> 
#include <stdlib.h>  

int binomio(int n, int k) 
{     
    if(k>n)         
        return 0;     
    if((k==0)|| (k==n))         
        return 1;     
    return binomio(n-1, k) + binomio(n-1, k-1); 
} 

int main() 
{     
    int n, k;     
    printf("Digite um valor para n: ");     
    scanf("%d", &n);     
    printf("Digite um valor para k: ");     
    scanf("%d", &k);     
    printf("%d",binomio(n,k));  

    return 0; 
    
}