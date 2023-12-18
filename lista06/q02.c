#include <stdio.h>

typedef struct {
    char nomePeca[50];
    int numeroPeca;
    float preco;
    int numeroPedido;
} Estoque;

void adicionarEstoque(Estoque* estoque) {
    printf("Digite o nome da peça: ");
    scanf("%s", estoque->nomePeca);
    printf("Digite o número da peça: ");
    scanf("%d", &estoque->numeroPeca);
    printf("Digite o preço: ");
    scanf("%f", &estoque->preco);
    printf("Digite o número do pedido: ");
    scanf("%d", &estoque->numeroPedido);
}

void imprimirEstoque(Estoque estoque) {
    printf("Nome da peça: %s\n", estoque.nomePeca);
    printf("Número da peça: %d\n", estoque.numeroPeca);
    printf("Preço: %.2f\n", estoque.preco);
    printf("Número do pedido: %d\n", estoque.numeroPedido);
}

int main() {
    Estoque estoque;
    adicionarEstoque(&estoque);
    imprimirEstoque(estoque);
    return 0;
}
