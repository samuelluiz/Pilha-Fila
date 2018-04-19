#ifndef FILAINDEX_H
#define FILAINDEX_H


typedef int tElemento;

typedef struct no{
    tElemento e;
    struct no *prox;
} tNo;

    extern tNo * getNo(tElemento v);
    extern void deleteNo(tNo *no);

    extern void CriaFila( tNo **fila);
    extern int FilaVazia(const tNo *fila);
    extern int ElementoFrente(const tNo *fila);
    extern int Acrescenta(tNo **fila, tElemento item);
    extern int Retira(tNo ** fila);

#endif // FILAINDEX_H
