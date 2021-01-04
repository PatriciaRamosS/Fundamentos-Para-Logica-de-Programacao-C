#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main (void)
{
    //Definindo o Vetor
    float vet[3];

    puts("Digite a primeira nota: ");
    scanf("%f", &vet[0]);
    puts("Digite a segunda nota: ");
    scanf("%f", &vet[1]);
    puts("Digite a terceira nota: ");
    scanf("%f", &vet[2]);
    
    printf("A media final eh: %f", (vet[0]+vet[1]+vet[2])/3);
    
    return 0;
} 