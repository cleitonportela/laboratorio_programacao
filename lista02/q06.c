#include <stdio.h>

int main(){
    int qtdPaulo = 0, qtdRenata = 0, qtdBrancos = 0, qtdNulos = 0;
    int voto, confirma;

    do{
        confirma = 2;
        while(confirma != 1){
            puts("---------------------------------------------------------------------------------------");
            puts("Bem-vindo à urna eletrônica, escolha uma das opções abaixo para seu voto no presidente");
            puts("Digite 5 para votar no candidato Paulo");
            puts("Digite 7 para votar na Renata");
            puts("Digite 0 para votar em branco");
            puts("Digite qualquer outro valor para votar nulo");
            scanf("%d", &voto);

            printf("Você digitou %d, digite 1 para confirmar ou outro valor para retornar\n", voto);
            scanf("%d", &confirma);
            if(confirma == 1){
                puts("Voto confirmado!");
            } else {
                puts("Você escolheu retornar");
            }
        }

        if(voto == 5) {
            qtdPaulo++;
        } else if(voto == 7){
            qtdRenata++;
        } else if(voto == 0){
            qtdBrancos++;
        } else if(voto > 0){
            qtdNulos++;
        }

    } while(voto>=0);
    
    puts("---------------------------------------------------------------------------------------");
    puts("Votação encerrada!");
    puts("Quantidade de votos:");
    printf("Paulo: %d\n", qtdPaulo);
    printf("Renata: %d\n", qtdRenata);
    printf("Brancos: %d\n", qtdBrancos);
    printf("Nulos: %d\n", qtdNulos);

    return 0;
}