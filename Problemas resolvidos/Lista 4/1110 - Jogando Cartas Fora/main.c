#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
}No;

typedef struct lista{
    struct no *raiz;
    int qtd;
}Lista;

Lista *fazLista();
// Função para alocar o ponteiro para a lista

No *fazNo(int valor);
// Função para alocar o ponteiro para o nó

int insereNo(Lista *lista, int valor);
// Função para inserir um novo nó no começo da lista

int insereNoFinal(Lista *lista, int valor);
// Função para inserir um novo nó no final da lista

int removeNo(Lista *lista, int valor);
// Função para remover um nó da lista

int liberaLista(Lista *lista);
// Função para liberar a lista da memória RAM

int main(void){
    Lista *lista = NULL;
    int n, aux;

    while(1){
        scanf("%d", &n);

        if(n == 0)
            break;

        lista = fazLista();

        for(int i = n; i >= 1; i--)
            insereNo(lista, i);

        printf("Discarded cards: ");
        while(lista->qtd > 1){
            aux = lista->raiz->valor;
            removeNo(lista, lista->raiz->valor); // remove a carta no topo
            if(lista->qtd > 1){
                printf("%d, ", aux);
            }else{ // se removeu o penúltimo nó (pretty printing)
                printf("%d\n", aux);
            }

            // move a nova carta no topo para o final da pilha
            aux = lista->raiz->valor;
            removeNo(lista, lista->raiz->valor);

            insereNoFinal(lista, aux);
            //
        }

        printf("Remaining card: %d\n", lista->raiz->valor);

        liberaLista(lista);
    }

    return 0;
}

Lista *fazLista(){
    Lista *lista = (Lista*) malloc(sizeof(Lista));
    if(lista == NULL)return NULL;

    lista->raiz = NULL;
    lista->qtd = 0;

    return lista;
}

No *fazNo(int valor){
    No *novoNo = (No*) malloc(sizeof(No));
    if(novoNo == NULL)return NULL;

    novoNo->valor = valor;
    novoNo->prox = NULL; // por padrão o nó é inserido no final da lista

    return novoNo;
}

int insereNo(Lista *lista, int valor){
    if(lista == NULL)return 1;

    No *novoNo = fazNo(valor);
    if(novoNo == NULL)return 2;

    // Inserção O(1)
    if(lista->qtd > 0){
        novoNo->prox = lista->raiz;

        lista->raiz = novoNo;
    }else{ // se é o primeiro nó
        lista->raiz = novoNo;
    }
    //

    lista->qtd++;

    return 0;
}

int insereNoFinal(Lista *lista, int valor){
    if(lista == NULL)return 1;

    No *novoNo = fazNo(valor);
    if(novoNo == NULL)return 2;

    if(lista->qtd > 0){
        No *aux;

        aux = lista->raiz;

        while(aux->prox != NULL)aux = aux->prox; // O(n)

        aux->prox = novoNo;
    }else{ // se é o primeiro nó
        lista->raiz = novoNo;
    }

    lista->qtd++;

    return 0;
}

int removeNo(Lista *lista, int valor){
    if(lista == NULL)return 1;

    No *ant, *aux;

    if(lista->qtd > 0){
        if(lista->qtd > 1){
            aux = lista->raiz;

            if(aux->valor != valor){
                while((aux != NULL) && (aux->valor != valor)){
                    ant = aux;

                    aux = aux->prox;
                }

                if(aux != NULL){
                    ant->prox = aux->prox;

                    free(aux);
                }else return 3;
            }else{ // se é o primeiro nó
                lista->raiz = aux->prox;

                free(aux);
            }
        }else{ // se é o primeiro e único nó
            aux = lista->raiz;

            free(aux);

            lista->raiz = NULL;
        }
    }else return 2;

    lista->qtd--;

    return 0;
}

int liberaLista(Lista *lista){
    if(lista == NULL)return 1;

    No *ant, *prox;

    ant = lista->raiz;

    while(ant != NULL){
        prox = ant->prox;

        free(ant);

        ant = prox;
    }

    free(lista);

    return 0;
}

// (meu) repositório da implementação de lista:
//
// https://github.com/yumiowari/c-tructures/tree/main/lista