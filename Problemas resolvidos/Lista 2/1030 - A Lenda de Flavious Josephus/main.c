#include <stdio.h>
#include <stdlib.h>

struct no{
    int valor;
    struct no *prox;
};

struct lista{
    struct no *raiz;
    int qtd;
};

typedef struct no No;
typedef struct lista Lista;

Lista *fazLista();
// Função para alocar o ponteiro para a lista

No *fazNo(int valor);
// Função para alocar o ponteiro para o nó

int insereNo(Lista *lista, int valor);
// Função para inserir um novo nó na lista

int liberaLista(Lista *lista);
// Função para liberar a lista da memória RAM

int josephus(Lista *lista, int n, int k);
// Algoritmo para resolver o problema de Flavious Josephus
//
// (retorna o sobrevivente)

int main(void){
  Lista *lista = NULL;

  int nc, n, k;

  scanf("%d", &nc);

  for(int i = 1; i <= nc; i++){
    lista = fazLista();

    scanf("%d %d", &n, &k);

    printf("Case %d: %d\n", i, josephus(lista, n, k));

    liberaLista(lista);
  }  

  return 0;
}

Lista *fazLista(){
    Lista *lista = (Lista*) malloc(sizeof(Lista));

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

    if(lista->qtd > 0){ // O(1)
        novoNo->prox = lista->raiz;

        lista->raiz = novoNo;
    }else{ // se é o primeiro nó
        lista->raiz = novoNo;
    }

    lista->qtd++;

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

int josephus(Lista *lista, int n, int k){
  No *ant, *aux;

  for(int i = n; i >= 1; i--)
    insereNo(lista, i);

  aux = lista->raiz;

  while(lista->qtd > 1){
    for(int i = 1; i < k; i++){ // para k passos
      ant = aux;

      aux = aux->prox;

      if(aux == NULL)
        aux = lista->raiz;
    }

    if(aux != lista->raiz){
      ant->prox = aux->prox;

      free(aux);

      if(ant->prox != NULL){ 
        aux = ant->prox;
      }else aux = lista->raiz; // quando removeu o último elemento
      
    }else{ // se é o nó raiz
      lista->raiz = aux->prox;

      free(aux);

      aux = lista->raiz;
    }

    lista->qtd--;
  }

  return lista->raiz->valor; // retorna o sobrevivente
}