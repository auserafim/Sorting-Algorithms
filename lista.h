#ifndef __LISTA_H__
#define __LISTA_H__

#include<stdio.h>
#include<stdlib.h>

#define N 10

struct est_lista {
    int lista[N];
    int contador;
};
typedef struct est_lista tipo_lista;

int insere_inicio_lista(tipo_lista*, int);
int insere_fim_lista(tipo_lista*, int);
int insere_pos_lista(tipo_lista*, int, int);
int remove_inicio_lista(tipo_lista*);
int remove_fim_lista(tipo_lista*);
int remove_pos_lista(tipo_lista*, int);
int remove_valor_lista(tipo_lista*, int);
int busca_pos_lista(tipo_lista, int);
int busca_valor_lista(tipo_lista, int);
int busca_maior_lista(tipo_lista);
int busca_menor_lista(tipo_lista);
void imprime_lista(tipo_lista);

#endif 