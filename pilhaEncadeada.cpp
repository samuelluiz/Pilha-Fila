#include "pilhaEncadeada.h"
#include <stdio.h>
#include <stdlib.h>

tNo * getNo(tElemento v){
    tNo * n;
    n = malloc(sizeof(tNo));
    if (n != NULL){
        n->e = v;
        n->prox = NULL;
    }
    return n;
}

void deleteNo(tNo *no){
    free(no);
}

int CriaPilha(tNo **pilha){
    pilha->prox = NULL;
}

int PilhaVazia(const tNo *pilha){
    return pilha->prox == NULL;
}
int ElementoTopo(const tNo *pilha){
    const tNo *no = lista;
    int c = 0;
    if(!PilhaVazia(pilha)) {
            printf("pilha vazia");
    return 1;
    }

 printf("%d ", pilha->prox);

}

void Empilha(tPilha **pilha, tElemento item){
tNo *novo = getNo(item);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }
    if (EstaVazia(*pilha)){
        *pilha = novo;
        return 1;
    }

    novo->prox = *pilha;
    *pilha = novo;
    return 0;
}

void Desempilha(tPilha ** pilha){
    tNo *topo = *pilha;
    if(topo->prox != NULL){
        *pilha = topo->prox;
        deleteNo(topo);
        return 1;
    }
    if(topo->prox == NULL){
        *pilha==NULL;
        deleteNo(topo);
        return 0;
    }
}
