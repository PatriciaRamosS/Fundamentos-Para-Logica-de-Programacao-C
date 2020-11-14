#include <stdio.h>

int main()
{
    int num, i, aux = 0;

    puts("Digite um valor para saber se ele eh primo: ");
    scanf("%d", &num);
    
    for(i=1;i<=num;i++)
    {
        //Contando quantas vezes ouve divisibilidade
        if(num%i==0)
        {
            aux++;
        }
        printf("%d / %d tem resto = %d\n", i, num%i);        
    }
    if(aux == 2)
    {
        puts("O numero eh primo!");
    }
    else
    {
        puts("O numero nao eh primo!");
        printf("Pois ele tem %d divisores.", aux);
    }
    
    return 0;
}