/*
Esta estrutura de repetição, garante que o bloco de instruções seja executado no mínimo uma vez, 
já que a condição que controla o laço é testada apenas no final do comando.

A diferença entre o comando while e o do…while é justamente o local onde a condição que controla o laço é testada.

No comando while a condição é testada antes do bloco de instruções, e caso a condição seja falsa a repetição não será executada.

No do…while o bloco de comandos é executado pelo menos uma vez de forma obrigatória, independente do resultado da expressão lógica.


Pseudocódigo:

do {
Instrução ou bloco de instruções;

} while (condição)
*/

#include<stdio.h>

//Função Principal
int main(void)
{
    //Declaração da Variáveis Locais
	float nota_1=0,nota_2=0,media=0;
	int resp;
	
    //Incio do Laço de Repetição
	do
	{
        //Entrada de Dados
		printf("Digite a primeira nota: ");
		scanf("%f",&nota_1);
		printf("Digite a segunda nota: ");
		scanf("%f",&nota_2);
		
        //Cálculo
		media = (nota_1 + nota_2)/2;

        //Resultado
		printf("Media do aluno = %f\n",media);
		
        //Esta parte do Código informar para o usuário
        //Caso ele queira SAIR DO PROGRAMA DIGITE 2
        //Senão, caso ele queira continuar DIGITE 1 E O PROGRAMA IRÁ RETORNAR AO INÍCIO E 
        //FARÁ AS PERGUNTAS NOVAMENTE 
		printf("Digite 1 para continuar ou 2 para sair\n");
		scanf("%d", &resp);//Variável de condição 
	
	}while (resp==1);//Enquanto o usuário digitar 1 o programa irá rodar novamente voltando ao início e perguntando as notas 
	
	return 0;
}