/*

Autor(es):
RA: 
Disciplina:
Professor:
Data de Criação: 
Data de Atualização: 


Objetivos: Descrever qual a funcionalidade do programa. O que faz o programa.

    Entradas: Descrever suas entradas de dados, caso eles disponha de alguma entrada.
    Saida: Descrever suas saidas de dados.
       
*/

// Bibliotecas de funções
#include<stdio.h> //Biblioteca referente a leitura a escritas dos dados 

// Declaracoes Globais
// Constantes e Tipos de Dados


/******* Área dos protótipos ******/
void imprime_cabec(void);

int multiplica(int N1, int N2);
/******* fim dos protótipos *******/


/* ******* FUNÇÃO PRINCIPAL *******/
int main(void)
{
    // Declaracao Locais
	int V1=0, V2=0;
    int resultado_multi=0, resultado_soma=0, resultado_divide=0, resultado_subtrai=0;

	//Chamada da função imprime_cabec
	imprime_cabec();

    //Entrada de dados
	printf("Digite o primeiro valor:");
	scanf("%d", &V1); //Leitura dos dados

    //Entrada de dados
	printf("Digite o segundo valor:");
	scanf("%d", &V2);//Leitura dos dados
	printf("\n\n"); //Pula linha 
	
	//chama a função e recebe o retorno
	resultado_multi = multiplica(V1,V2);

    //Resultados
	printf("Multiplicao = %d\n", resultado_multi);

	//espera que o usuário digite uma tecla e retorna este caractere.
	getch();

    // Finalizacao do programa
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
    // Escrita da saida pedida
	printf("******************************\n");
	printf("* CALCULADORA EM C *\n");
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
    // Declaracao Locais
	int resultado;

    //Calculo
	resultado = N1 * N2;
	
	//retornando o valor para main
	return(resultado);
}
