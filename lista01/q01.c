#include <stdio.h>

int main(){

    int x;

    // Exemplo 1

    x = 7 + 3*6/2-1;

    // para aritmética a ordem de precedência é da esquerda para direita
    // multiplicação, divisão e módulo tem prioridade em relação a adição e substração

    // a ordem de prioridade é primeiro a multiplicação de 3*6 que é igual a 18 
    // depois a divisão de 18/2 que é igual a 9
    // logo após, as somas de 9 - 1 que é 8 que somado com 7 dá 15

    
    printf("Resultado 1: %d \n", x);

    // Exemplo 2

    x = 2%2 + 2*2-2/2;

    // pela ordem de prioridade da esquerda para direita, primeiro é feito o módulo de 2 por 2 que dá 0
    // logo após é feita a multiplicação de 2*2 que dá 4 e depois a divisão de 2/2 que é 1
    // por fim é somado 0 + 4 - 1 que é igual a 3

    printf("Resultado 2: %d \n", x);

    // Exemplo 3

    x = (3 * 9 * (3 + (9 * 3/ (3) )));

    // com parênteses altera a ordem de precedência tendo prioridade dos que estão mais dentro para os últimos por fora
    // é feito o resultado do primeiro parênteses de (9*3) que dá 27
    // depois é feito a divisão por 3 que dá 9
    // em seguida é calculado 3 + 9 que dá 12
    // depois é feito a multiplicação de 3 * 9 que dá 27 e por último 27 * 12 que dá 324

    printf("Resultado 3: %d \n", x);

    return 0;
}