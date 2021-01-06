/*

Uma função nada mais é do que uma subrotina usada em um programa.

Na linguagem C, denominamos função a um conjunto de comandos que realiza 
uma tarefa específica em um módulo dependente de código.

A utilização de funções visa modularizar um programa, o que é muito comum em programação estruturada.

Desta forma podemos dividir um programa em várias partes, no qual cada função realiza uma tarefa bem definida.

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>

/******* Área dos protótipos ******/
void imprime_cabec(void);
void resultado(void);

int multiplica(int N1, int N2);
int divide(int N1, int N2);
int subtrai(int N1, int N2);
int soma(int N1, int N2);
/******* fim dos protótipos *******/

/* ******* FUNÇÃO PRINCIPAL *******/
int main(void)
{
	int V1=0, V2=0;
    int resultado_multi=0, resultado_soma=0, resultado_divide=0, resultado_subtrai=0;

	//Chamada da função imprime_cabec
	imprime_cabec();

	printf("Digite o primeiro valor:");
	scanf("%d", &V1);
	printf("Digite o segundo valor:");
	scanf("%d", &V2);
	printf("\n\n");
	
	//chama a função e recebe o retorno
	resultado_multi = multiplica(V1,V2);
    resultado_soma =  soma(V1,V2);
    resultado_divide = divide(V1,V2);
    resultado_subtrai = subtrai(V1,V2);
    
    resultado();

	printf("Multiplicao = %d\n", resultado_multi);
    printf("Divisao = %d\n", resultado_soma);
    printf("Subtracao = %d\n", resultado_divide);
    printf("Soma = %d\n", resultado_subtrai);
	
	getch();
	return 0;
}
/* ******** FIM DA FUNÇÃO PRINCIPAL *******/

/* --------- Corpo das funções --------- */
/*
***** Função imprime_cabec *****
Parâmetros de entrada: não tem (void)
Objetivo: imprimir cabeçalho na tela
Tipo de retorno: não tem (void)
*/
void imprime_cabec(void)
{
	printf("******************************\n");
	printf("* CALCULADORA EM C *\n");
	printf("******************************\n\n");
	
    /*"return" sem valor, simplesmente retorna o controle para a função que chamou a função corrente. 
    Nenhum valor de retorno é passado, ou seja, o valor de retorno é indefinido.

    Você usa "return" sem valor em funções que tenham sido definidas como retornando o tipo "void". 
    Em qualquer outro tipo de retorno, usar "return" sem valor é errado*/

	return;/* retorno de uma função void */

    //Caso retire o return não faria diferença, pois ele não está retornando nada.
}

void resultado(void)
{
	printf("******************************\n");
	printf("* RESULTADO *\n");
	printf("******************************\n\n");
	
	return;/* retorno de uma função void */
}

/*
***** Função multiplica *****
Parâmetros de entrada: N1, N2 ambos int
Objetivo: multiplicar valores
Tipo de retorno: int (resultado);
*/
//multiplica recebe N1,N2 e retorna um int
int multiplica(int N1, int N2)
{
	int resultado;
	resultado = N1 * N2;
	
	//retornando o valor para main
	return(resultado);
}

int divide(int N1, int N2)
{
	int resultado;
	resultado = N1 / N2;
	
	//retornando o valor para main
	return(resultado);
}

int subtrai(int N1, int N2)
{
	int resultado;
	resultado = N1 - N2;
	
	//retornando o valor para main
	return(resultado);
}

int soma(int N1, int N2)
{
	int resultado;
	resultado = N1 + N2;
	
	//retornando o valor para main
	return(resultado);
}