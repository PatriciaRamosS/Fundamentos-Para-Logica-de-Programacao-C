#include <stdio.h>
#include <stdlib.h>

//Bibliotecas C++
#include <string>
#include <iostream>

using namespace std;

//Função Principal
int main (void)
{
    //Criando uma matriz
    int matriz[2][2];
    int i, j;

    //Passando valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //imprimindo valores na tela
    for(int i=0; i<2; i++)
    {
        for(j=0; j<2; j++)
        {
            //Esta imprimindo o indice
            //cout << "\ni = " << i << " , j = " << j;           
            
            //Imprimindo a atribuição das variaveis
            cout << matriz[i][j] << " ";
        }
        cout << "\n";
    }

    
    return 0;
} 