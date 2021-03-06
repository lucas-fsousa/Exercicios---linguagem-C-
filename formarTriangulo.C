#include <stdio.h> // Biblioteca padr�o para utilizar comando de entrada e saida de dados.

/*
---------------------IMPORTANTE!!------------------------
PARA COMPOR UM TRIANGULO EXISTE UMA REGRA QUE UM LADO S�
SER� VALIDO SE FOR MAIOR QUE A SOMA DOS OUTROS DOIS LADOS.
EX:
LADO 1 + LADO 2 MAIOR QUE O LADO 3
LADO 2 + LADO 3 MAIOR QUE O LADO 1
LADO 3 + LADO 1 MAIOR QUE O LADO 2
SE ESSAS CONDI�OES FOREM VERDADEIRAS, SER� POSSIVEL FORMAR
UM TRIANGULO.
EM CASO DE DUVIDAS CONSULTE O LINK ABAIXO.
https://mundoeducacao.uol.com.br/matematica/condicao-existencia-um-triangulo.htm
*/

int main(void){ // Inicio do c�digo principal
    float l0, l1, l2; // Declara��o de variavel
    //Entrada de dados do usuario
    printf("Digite o valor correspondente ao primeiro lado do triangulo: ");
    scanf("%f", &l0); //Faz a leitura do que o usuario digitar e armazena na variavel l0
    printf("Digite o valor correspondente ao segundo lado do triangulo: ");
    scanf("%f", &l1); //Faz a leitura do que o usuario digitar e armazena na variavel l1
    printf("Digite o valor correspondente ao terceiro lado do triangulo: ");
    scanf("%f", &l2); //Faz a leitura do que o usuario digitar e armazena na variavel l2
    if(l0 + l1 > l2 && l1 + l2 > l0 && l2+l0 > l1){ // Verifica o tamanho dos lados para identificar se � possivel formar um triangulo.
        printf("os lados %.1f x %.1f x %.1f pode formar um triangulo!", l0, l1, l2); // Se a condi��o de verifica��o for verdadeira, informar� na tela o resultado para o usuario
    }else{ // Se a condica��o retornar falso, informar� na tela para o usuario que n�o � possivel formar um triangulo
        printf("Os lados %.1f x %.1f x %.1f nao podem formar um triangulo!", l0, l1, l2);
    }
    return 0; // Retorna erros caso ocorram
} // Fim do c�digo principal
