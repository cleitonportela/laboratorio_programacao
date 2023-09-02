#include <stdio.h>

int main(){

    float sal;
    int horas;

    puts("Digite a quantidade de horas trabalhadas do professor");
    scanf("%d", &horas);

    puts("Digite o valor da hora aula");
    scanf("%f", &sal);   //armazena as horas temporariamente em salário

    sal = horas * sal;

    //desconto inss
    if (sal <= 1320){
        //desconto de 7.5%
        printf("Salário líquido %.2f reais e salário bruto %.2f reais\n", sal, sal * 0.925);
    } else if (sal <= 2571.29){
        //desconto de 9%
        printf("Salário líquido %.2f reais e salário bruto %.2f reais\n", sal, sal * 0.91);
    } else if (sal <= 3856,94){
        //desconto de 9%
        printf("Salário líquido %.2f reais e salário bruto %.2f reais\n", sal, sal * 0.88);
    } else {
        //desconto de 14%
        printf("Salário líquido %.2f reais e salário bruto %.2f reais\n", sal, sal * 0.86);
    } 

    return 0;

}