#include <stdio.h> // Biblioteca padr�o para utilizar comando de entrada e saida de dados.

int main(void){ // Inicio do c�digo principal
    int num; // Declara��o de variavel
    printf("Digite um numero: "); // Informa oa usuario o que deve ser digitado a seguir
    scanf("%d", &num); // faz a leitura do numero digitado pelo usuario
    if(num % 3 == 0 && num % 5 == 0){ // Se o numero for divisivel por 3 e por 5 est� ser� uma condi��o verdadeira
        printf("O numero %d pode ser dividido por 3 e por 5!", num); // Informa ao usuario o resultado da verifica��o se este for verdadeiro
    }else{ // Se o numero n�o for divisivel por 5 e por 3 retornar� um valor falso.
        printf("O numero %d nao pode ser dividido por 3 e por 5!", num); // Informa ao usuario o resultado da verifica��o se este for falso
    }
    return 0; // Retorna erros caso ocorram
} // Fim do c�digo principal
