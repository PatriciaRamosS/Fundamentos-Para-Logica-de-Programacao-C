#include <stdio.h>
#include <math.h>
#include <locale.h> //necessário para usar setlocale
#include <stdbool.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int N, i;
    bool ePrimo = true; 

    printf("Entre com um número a ser testado: ");
    scanf("%d",&N);
    if ((N == 0) || (N == 1))
    {
        ePrimo=!true;
    }
    else if(N == 2)
    {
        ePrimo=true;
    }
    else
    {
        ePrimo=true;
        i = 2;
        do
        {
            if(N%i==0)
            {
                ePrimo=!true;
            }
            i=i+1;

        }while(i!=N);
    }
    if(ePrimo==!true)
    {
        printf("%d nao e primo",N);
    }
    else if(ePrimo)
    {
        printf("%d e primo",N);
    }

    return 0;
}