#ifndef PILHAENCADEADA_H
#define PILHAENCADEADA_H

typedef int tElemento;

typedef struct no{
    tElemento e;
    struct no *prox;
} tNo;

    extern int CriaPilha( tNo **pilha);

    extern int PilhaVazia(const tPilha *p);
    extern int ElementoTopo(const tPilha *p);
    extern void Empilha(tPilha *p, tElemento item);
    extern void Desempilha(tPilha *p);

#endif // PILHAENCADEADA_H
