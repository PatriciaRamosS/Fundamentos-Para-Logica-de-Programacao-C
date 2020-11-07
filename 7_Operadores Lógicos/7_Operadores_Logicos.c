#include <stdio.h>
#include <stdlib.h>

//Função principal do programa
int main(void){

    //Definindo Variáveis
    int n1, n2, frequencia, media, recuperacao;

    printf("\n Insira a Nota Parcial: ");
    scanf("%d", &n1);
    printf("\n Insira a Nota Final: ");
    scanf("%d", &n2);

    printf("\n Insira a Frequencia: ");
    scanf("%d", &frequencia);

    printf("\n Insira a sua nota de Recuperação \n(CASO TENHA UMA)\n(SE NÃO TIVER UMA FAVOR DIGITAR ZERO): ");
    scanf("%d", &recuperacao);

    media = ((n1*0.4)+(n2*0.6));

    //Se frequencia for menor que 75 E n2 for igual a zero
    if((frequencia < 75) && (n2 == 0)) //Então
        printf("\n ALUNO REPROVADO!!\n");
    else
        //Se media for maior ou igual a 5 E frequencia for igual a 75
        //OU frequencia for igual a 60 E recuperacao for maior ou 7 
        if(((media >= 5) && (frequencia > 75)) || ((frequencia > 75) && (recuperacao >= 7))) //Então
            printf("\n ALUNO APROVADO!!\n");
        //Senão 
        else
            printf("\n ALUNO REPROVADO!!\n");
            
    //Pausa o programa após executar
    system("pause");

    return 0;
}
