#ifndef PILHAINDEX_H
#define PILHAINDEX_H


typedef int tElemento;

typedef struct no{
    tElemento e;
    struct no *prox;
} tNo;

    extern int CriaPilha( tNo **pilha);
    extern int PilhaVazia(const tNo *p);
    extern int ElementoTopo(const tNo *p);
    extern int Empilha(tNo *p, tElemento item);
    extern int Desempilha(tNo *p);

#endif // PILHAINDEX_H
