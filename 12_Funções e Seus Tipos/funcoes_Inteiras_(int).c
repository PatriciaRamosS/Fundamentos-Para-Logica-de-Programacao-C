#include<stdio.h>
#include<stdlib.h>

int soma(int num1, int num2);
int subtrai(int num1, int num2);
int subtrai(int num1, int num2);
int multiplica(int num1, int num2);
void menu();
void leitura();
void escrita();

int main(void)
{
    leitura();
    menu();

    return 0;
}

//conteudo do menu "soma"
int soma(int num1, int num2)
{
   return num1+num2;
}

//conteudo do menu "subtrair"
int subtrai(int num1, int num2)
{
    return num1-num2;
}
//conteudo do menu "multiplicar"
int multiplica(int num1, int num2)
{
    return num1*num2;
}

//conteudo do menu "subtrair"
int divide(int num1, int num2){
    if(num1>num2) 
    {
        return num1/num2;
    }
    else
    {
        printf("O entre com um divisor menor... ");
        system("clear");
        return 0;
    }
}

void escrita(int resultado)
{
    system("cls");
    printf("O Resultado eh: %d", resultado);
    printf("\n");
}

void leitura()
{
    //declaracao de variaveis
    int num1, num2;

    //solicita dados
    printf("Entre com o primeiro numero: ");
    scanf("%d",&num1);
    printf("Entre com o segundo numero: ");
    scanf("%d",&num2);
    getchar();
}

void menu()
{
    //declaracao de variaveis
    int opc, num1, num2, resultado;
    
    //solicita operacao
    printf("Escolha a operacao que deseja realizar:");
    printf("\n[1] Somar\n[2] Subtrair\n[3] Multiplicar\n[4] Dividir\n");
    printf("Qual opcao voce escolhe? ");
    scanf("%d",&opc);
    getchar();

    switch(opc){

        case 1:
        //soma:
        escrita(soma(num1,num2));

        break;

        case 2:
        //subtrai
        escrita(subtrai(num1,num2));

        break;

        case 3:
        //multiplica
        escrita(multiplica(num1,num2));

        break;

        case 4:
        //divide
        escrita(divide(num1,num2));

        break;

    }
    return 0;
}