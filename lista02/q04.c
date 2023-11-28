#include <stdio.h>

int main(){
    int joseAltura = 150;
    int pedroAltura = 110;
    int anos = 0;


    while (joseAltura >= pedroAltura){
        joseAltura = joseAltura + 2;
        pedroAltura = pedroAltura + 3;
        anos++;
    }

    printf("Em %d anos Pedro será mais alto que José, com suas alturas sendo respectivamente %d e %d cm\n", anos, pedroAltura, joseAltura);

    return 0;
}