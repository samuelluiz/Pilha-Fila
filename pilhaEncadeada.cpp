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

void deleteNo(tNo * no){
    free(no);
}

int CriaPilha(tNo **pilha){
    pilha->prox = NULL;
}

int PilhaVazia(const tNo *pilha){
    return pilha->prox == NULL;
}
int ElementoTopo(const tNo #pilha){
    const tNo *no = lista;
    int c = 0;
    if(!PilhaVazia(pilha)) {
            printf("pilha vazia");
    return 1;
    }

 printf("%d ", pilha->prox);

}

void Empilha(tPilha *p, tElemento item){
tNo *novo = getNo(elemento);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }
    if (EstaVazia(*pilha)){
        *pilha = novo;
        return 0;
    }

    tNo * no = *novo;

    no->prox = pilha->prox;
    pilha->prox = novo;

    return 0;
}
void Desempilha(tPilha *p){
    pilha->prox =
 tNo *deletar = no->prox;
    no->prox = no->prox->prox;
}
