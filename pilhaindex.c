#include "pilhaindex.h"
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

void CriaPilha(tNo **pilha){
*pilha = NULL;
}

int PilhaVazia(const tNo *pilha){
    return pilha->prox == NULL;
}
int ElementoTopo(const tNo *pilha){
    const tNo *no = pilha;
    if(!PilhaVazia(pilha)) {
            printf("pilha vazia");
    return 1;
    }
    printf("%d ", no->e);
return 0;
}

int Empilha(tNo **pilha, tElemento item){
tNo *novo = getNo(item);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }

    novo->prox = *pilha;
    *pilha = novo;
    return 0;
}

int Desempilha(tNo ** pilha){
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
    return 1;
}
