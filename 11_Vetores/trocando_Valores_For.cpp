/*
Trocando os dados das matrizes com o uso  de duas variváveis auxiliares 
*/

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
    int aux1, aux2;

    //lendo os valores da matriz
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("Digite uma valor para [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    cout << "\n\nPRIMEIRA MATRIZ\n"; 
    //Imprimindo os valores da matriz
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("[%d][%d]: %d ", i, j, matriz[i][j]);
        }
        cout << "\n"; 
    }

    //Atribuindo os valores da matriz nas variveis auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1]; 

    //Invertendo valores usando auxiliares
    matriz[0][0] = matriz[1][0];   
    matriz[0][1] = matriz[1][1];

    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

    cout << "\n\nMATRIZ TROCADA\n"; 
    //Imprimindo os valores da matriz
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            printf("[%d][%d]: %d ", i, j, matriz[i][j]);
        }
        cout << "\n"; 
    }

    return 0;
} 