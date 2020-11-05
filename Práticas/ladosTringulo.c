#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    float lado_1, lado_2, lado_3;

    printf("Digite o primeiro lado: ");
    scanf("%f", &lado_1);

    printf("Digite o segundo lado: ");
    scanf("%f", &lado_2);

    printf("Digite o terceiro lado: ");
    scanf("%f", &lado_3);

    //Maior
    if((lado_1>0) && (lado_2>0) && (lado_3>0) && (lado_1 < (lado_2 + lado_3)) && (lado_2 < (lado_1 + lado_3)) && (lado_3 < (lado_1 + lado_2))){
  
        printf("Triângulo Existênte.\n");

        if((lado_1==lado_2)&&(lado_1==lado_3)&&(lado_2==lado_3))
        {
            printf("Triângulo Equilátero.");
        }
        else if((lado_1==lado_2)||(lado_1==lado_3)||(lado_2==lado_3))
        {
            printf("Triângulo Isósceles.");
        }
        else
        {
            printf("Triângulo Escaleno.");
        }
    }
    else
    {
        printf("Triângulo não existe.\n");
    }
    
    //Pausa o programa após executar
    system("pause");

}