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

    cout << "Digite uma valor para [0][0]: ";
    cin >> matriz[0][0];
    cout << "Digite uma valor para [0][1]: ";
    cin >> matriz[0][1];
    cout << "Digite uma valor para [1][0]: ";
    cin >> matriz[1][0];
    cout << "Digite uma valor para [1][1]: ";
    cin >> matriz[1][1];

    cout << "\n\nPRIMEIRA MATRIZ\n"; 
    cout << "MATRIZ [0][0]: " << matriz[0][0];
    cout <<  " | " << "MATRIZ [0][1]: " << matriz[0][1];
    cout << "\n";
    cout << "MATRIZ [1][0]: " << matriz[1][0];
    cout <<  " | " << "MATRIZ [1][1]: " << matriz[1][1];

    cout << "\n\nMATRIZ TROCADA\n"; 

    //Atribuindo os valores da matriz nas variveis auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1]; 

    /*
    Exemplo 1:

    aux1; 
    
    matriz[0][0] = 6;

    aux1 = matriz[0][0];

    -> aux1 = 6;
    */

    /*
    Exemplo 2:

    aux2; 
    
    matriz[0][1] = 10;

    aux2 = matriz[0][0];

    -> aux2 = 10;
    */

    matriz[0][0] = matriz[1][0];   
    matriz[0][1] = matriz[1][1];

    /*
    Exemplo 3:

    matriz[0][0] = 23; 
    
    matriz[1][0] = 56;

    matriz[0][0] = matriz[1][0];

    -> matriz[0][0] = 56;
    */

    /*
    Exemplo 4:

    matriz[0][1] = 63; 
    
    matriz[1][1] = 48;

    matriz[0][1] = matriz[1][1];

    -> matriz[0][1] = 48;
    */

    matriz[1][0] = aux1;
    matriz[1][1] = aux2;

     /*
    Exemplo 4:

    matriz[1][0] = 56; 
    
    matriz[1][1] = 48;

    aux1 = 6;

    aux2 = 10;

    ***********************

    matriz[1][0] = aux1;

    matriz[1][0] = 6

    ***********************

    matriz[1][1] = aux2;

    matriz[1][1] = 10;

    */


    /*
    
    MATRIZ INICIAL

    [06]  [10]
    [56]  [48]
    
    MATRIZ TROCADA

    [56]  [48]
    [06]  [10]

    */

    cout << "MATRIZ [0][0]: " << matriz[0][0];
    cout <<  " | " << "MATRIZ [0][1]: " << matriz[0][1];
    cout << "\n";
    cout << "MATRIZ [1][0]: " << matriz[1][0];
    cout <<  " | " << "MATRIZ [1][1]: " << matriz[1][1];

    return 0;
} 