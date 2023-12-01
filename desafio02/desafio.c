#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MAX 32


struct Node {
    int estado;
    int tam; // tamanho do bloco
    int inicio; // endereço inicial do bloco
    struct Node* prox; // ponteiro para o próximo bloco
};


struct Node* criar_Node(int estado, int tam, int inicio) {
    struct Node* novoNode = (struct Node*)malloc(sizeof(struct Node));       // Se o bloco está livre, insere ele na lista*)malloc(sizeof(struct Node));
    novoNode->estado = estado;
    novoNode->tam = tam;
    novoNode->inicio = inicio;
    novoNode->prox = NULL;
    return novoNode;
}


void insert_Node(struct Node** head, struct Node* novoNode) {
    if (*head == NULL) {
        *head = novoNode;
        return;
    }
    if (novoNode->inicio < (*head)->inicio) {
        novoNode->prox = *head;
        *head = novoNode;
        return;
    }

    struct Node* current = *head;
    while (current->prox != NULL && current->prox->inicio < novoNode->inicio) {
        current = current->prox;
    }
   
    novoNode->prox = current->prox;
    current->prox = novoNode;
}

void exibirValorLista(struct Node* head) {
    printf("Lista de espaços\n");
    printf("Bloco\tEstado\tTamanho\tEndereço\n");
    int i = 1;
    struct Node* current = head;
    while (current != NULL) {
        printf("%d\t%d\t%d\t%d\n", i, current->estado, current->tam, current->inicio);
        i++;
        current = current->prox;
    }
}


void first_fit(struct Node** head, int tam) {
    struct Node* current = *head;
    struct Node* previous = NULL;
    while (current != NULL) {
        if (current->tam >= tam) {
            printf("Processo de tamanho %d alocado no bloco de endereço %d\n", tam, current->inicio);
            current->tam -= tam;
            current->inicio += tam;
            if (current->tam == 0) {
                if (previous == NULL) {
                    *head = current->prox;
                } else {
                    previous->prox = current->prox;
                }
                free(current);
            }
            return;
        }
        previous = current;
        current = current->prox;
    }
    printf("Não há espaço livre suficiente para alocar o processo de tamanho %d\n", tam);
}

void best_fit(struct Node** head, int tam) {
    struct Node* best = NULL;
    struct Node* best_previous = NULL;
    int best_tam = MAX;
    struct Node* current = *head;
    struct Node* previous = NULL;
    while (current != NULL) {
        if (current->tam >= tam && current->tam < best_tam) {
            best = current;
            best_previous = previous;
            best_tam = current->tam;
        }
        previous = current;
        current = current->prox;
    }
    if (best != NULL) {
        printf("Processo de tamanho %d alocado no bloco de endereço %d\n", tam, best->inicio);

        best->tam -= tam;
        best->inicio += tam;

        if (best->tam == 0) {
            if (best_previous == NULL) {
                *head = best->prox;
            } else {
                best_previous->prox = best->prox;
            }
            free(best);
        }
        return;
    }
 
    printf("Não há espaço livre suficiente para alocar o processo de tamanho %d\n", tam);
}


int main() {

    srand(time(NULL));

    struct Node* head = NULL;

    int anterior = 0;
    int blocos[5];
    for (int i = 0; i<5;i++){
        blocos[i] = (anterior + rand()) % MAX;
        anterior = blocos[i];
    }

    int inicio = 0;
    for (int i = 0; i < 5; i++) {
        // Gera um número aleatório entre 0 e 1 para decidir se o bloco está ocupado ou livre
        int ocupado = rand() % 2;
        // Se o bloco está livre, insere ele na lista
        struct Node* novoNode = criar_Node(ocupado, blocos[i], inicio);


        insert_Node(&head, novoNode);



        // Atualiza o endereço inicial do próximo bloco
        inicio += blocos[i];
    }
    // Imprime a lista de blocos de memória livre
    exibirValorLista(head);

    int escolha;
    printf("Digite a opção do algoritmo de alocação de memória:\n");
    printf("1. First-Fit\n");
    printf("2. Best-Fit\n");
    scanf("%d", &escolha);
    int tam;
    while (1) {
        // Recebe o tamanho do processo a ser alocado
        printf("Digite o tamanho do processo a ser alocado ou 0 para sair:\n");
        scanf("%d", &tam);
        if (tam == 0) {
            break;
        }

        if (escolha == 1) {
            first_fit(&head, tam);
        } else if (escolha == 2) {
            best_fit(&head, tam);
        } else {
            printf("Opção inválida\n");
            break;
        }

        exibirValorLista(head);
    }

    // Libera a memória alocada para a lista
    struct Node* current = head;
    while (current != NULL) {
        struct Node* temp = current;
        current = current->prox;
        free(temp);
    }
    return 0;
}