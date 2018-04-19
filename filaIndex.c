#include "filaIndex.h"
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

void CriaFila( tNo **fila){
*fila = NULL;
}

int FilaVazia(const tNo *fila{
    return fila->prox == NULL;
}

int ElementoFrente(const tNo *fila){
    const tNo *no = fila;
    if(!filaVazia(fila)) {
            printf("fila vazia");
    return 1;
    }

    printf("%d ", no->e);
return 0;
}

int Acrescenta(tNo **fila, tElemento item){
tNo *novo = getNo(item);
    if (novo == NULL){
        puts("memoria cheia");
        return 1;
    }

 tNo *no = *fila;
    while(no != NULL ){
        if(no->prox == NULL){
            no->prox = novo;
        }
        no=no->prox;
    }
    return 0;
}

int Retira(tNo **fila){
    tNo *no = *fila;
    if(!FilaVazia()){
        print("Fila Vazia");
        return 1;
    }
    no = *fila;
    *fila = no->prox;
    deleteNo(no);

    return 0;
}
