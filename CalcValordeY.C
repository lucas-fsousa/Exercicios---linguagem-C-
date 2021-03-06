#include <stdio.h> // Biblioteca para utilizar comando de entrada e saida de dados
#include <math.h> // Biblioteca matematica para utilizar o "POW" para calcular pot�ncia.

int main(){ // Inicio do C�digo principal
    float x, y; // Declara��o de variavel X e Y
    printf("Digite o valor de X: "); // Informa ao usuario o que deve ser digitado
    scanf("%f", &x); // Faz a leitura do numero digitado pelo usuario
    if(x < 1){ // se o valor de X for menor que o numero 1, (zero ou numeros negativos)
        y = x; // Y receber� o valor de X
    }else if(x == 1){ // Se o valor de X for igual a 1
        y = 0; // Y receber� o valor 0
    }else{ // Se nenhuma das alternativas anteriores forem verdadeiras, significa que o valor de X � maior que 1
        y = pow(x, 2); // Y receber� o valor de X elevado a 2(segunda potencia).
    }
    printf("O valor de Y sera %.2f, pois o valor de X equivale a %.2f", y, x); // Informa ao usuario o resultado final
    return 0; // Retorna erros caso ocorram
} // Fim do c�digo principal
