#include <stdio.h> // IMPORTA��O DA BIBLIOTECA

//PROGRAMA PRINCIPAL
int main(void){ // ABERTURA DO C�DIGO PRINCIPAL

    float area, altura, raio, pi; // Declara��o das variaveis do c�digo

    pi = 3.14; // Atribui��o de valor a uma variavel, neste caso atribuido o valor de PI que � 3.14

    printf("\n Digite a altura -> "); // Comando de saida informando ao usuario o que deve ser digitado em seguida
    scanf("%f", &altura); // Comando de entrada para capturar o valor digitado e armazenar na variavel altura

    printf("\n Digite o raio -> "); // Comando de saida informando ao usuario o que deve ser digitado em seguida
    scanf("%f", &raio); // Comando de entrada para capturar o valor digitado e armazenar na variavel raio

    area = 2 * pi * altura * raio; // Calculo da area utilizando os valores das variaveis raio, altura e pi que foram atribuiadas anteriormente.

    printf(" A area cilindrica de altura %.1fm e raio %.1fm corresponde a %.1fm\n\n", altura, raio, area); // Comando de saida para informar o resultado para o usuario
    return 0; // Comando para retornar erros (Caso exista algum erro.)

} // FECHAMENTO DO C�DIGO PRINCIPAL
