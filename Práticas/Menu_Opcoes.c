#include<stdio.h>


//Função Principal
int main(void)
{
    
    //Declaração da Variáveis Locais
	int opcao;
	
    while((opcao < 1) || (opcao > 3))
    {
        //Entrada de Dados
        puts("1 - Primeira Opcao");
        puts("2 - Segunda Opcao");
        puts("3 - Terceira Opcao");

        scanf("%d",&opcao);

        switch(opcao)
        {
            case 1 : puts("1 -  Opcao");
                break;
            case 2 : puts("2 -  Opcao");
                break;
            case 3 : puts("3 -  Opcao");
                break;
            default : puts("\nOpcao invalida!\n");
        }
    }
	return 0; //Retorna 
}






