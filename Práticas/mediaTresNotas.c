#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
void main(){

    //Definindo Variáveis
    float nota_1, nota_2, nota_3, media;

    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);

    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);

    printf("Digite sua terceira nota: ");
    scanf("%f", &nota_1);

    media = ((nota_1 + nota_2 + nota_3))/3;

    //Maior
    if(media >= 7){
        printf("Aprovado.\n");
        printf("Média: %f\n", media);
    }
    else
    {
        printf("Reprovado.\n");
        printf("Média: %f\n", media);
    }
    


    //Pausa o programa após executar
    system("pause");

}