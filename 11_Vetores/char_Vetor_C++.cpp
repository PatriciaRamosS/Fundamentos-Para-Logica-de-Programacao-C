#include <stdio.h>
#include <stdlib.h>

//Bibliotecas C++
#include <string>
#include <iostream>

//Função Principal
int main (void)
{
    //Definindo variveis locais
    std::string palavra;

    //Entrada de dados
    std::cout << "Digite uma palavra: ";

    //Leitura dos dados
    std::cin>>palavra;

    //Saída de dados
    std::cout<<palavra;

    return 0;
} 