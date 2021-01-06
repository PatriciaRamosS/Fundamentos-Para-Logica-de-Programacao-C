/*

Caso dê problema na leitura do char:

Após a leitura de um tipo CHAR quando você aperta ENTER o C entende que você inseriu "\n", 
dessa forma o próximo SCANF é automaticamente preenchido com um '\n' e por isso não funciona, 
de forma que sempre que você usar um scanf de char deve colocar em seguida um getchar() ou fflush(stdin), 
eu particularmente prefiro getchar, mais simples, exemplo:

scanf("%c", palavra); //insere a palavra;

getchar(); // limpa o \n do enter;

scanf("%d", numero); // lê normalmente o numero;



*/

#include <stdio.h>
#include <stdlib.h>

//Função Principal
int main (void)
{
    //Definindo o Vetor
    char vet[255];

    //Entrada de dados
    puts("Digite uma palavra: ");

    //Limpar o Buffer
    setbuf(stdin, 0);

    //Limpa as casas não utilizadas
    //Determina o tamanho de uma string.
    vet[strlen(vet)-1]='\0';

    //Leitura da string
    fgets(vet, 255, stdin);

    //Resultado
    printf("%s", vet);

    return 0;
} 