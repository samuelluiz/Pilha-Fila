#ifndef PILHAINDEX_H
#define PILHAINDEX_H


typedef int tElemento;

typedef struct no{
    tElemento e;
    struct no *prox;
} tNo;
    extern tNo * getNo(tElemento v);
    extern void deleteNo(tNo *no);

    extern void CriaPilha( tNo **pilha);
    extern int PilhaVazia(const tNo *pilha);
    extern int ElementoTopo(const tNo *pilha);
    extern int Empilha(tNo **pilha, tElemento item);
    extern int Desempilha(tNo ** pilha);

#endif // PILHAINDEX_H
