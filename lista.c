#include "lista.h"



int insere_fim_lista(tipo_lista *lst, int aux) {
  if(lst->contador < N ) {
    lst->lista[lst->contador++] = aux;
    return 1;
  }

  return 0;
}


void imprime_lista(tipo_lista lst) { 

  printf("\n\nLISTA: [");

  for(int i = 0; i < lst.contador; i++) {

    printf("%d" " ", lst.lista[i]);

  }

  printf("]\n");
}



int insere_pos_lista(tipo_lista *lst, int aux, int index) {

  if (lst->contador < N ) {

    if ((index >= 0) && (index <= lst->contador) ) {

     for(int i = lst->contador; i > index; i--) {

      lst->lista[i] = lst->lista[i-1];

     }

    lst->lista[index] = aux; 
    lst->contador++;
  } 
  } else {
    printf("\nERRO: A lista está cheia");
 } 
}