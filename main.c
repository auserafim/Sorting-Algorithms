#include "lista.h"
#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_lista lista;

  lista.contador = 0;

  insere_fim_lista(&lista, 1000);

  insere_fim_lista(&lista, 50);

  insere_fim_lista(&lista, 251111);

  insere_fim_lista(&lista, 0);


  imprime_lista(lista);


  quickSort(&lista);

  imprime_lista(lista);

  bubbleSort(&lista);

  imprime_lista(lista);

  insertionSort(&lista);

  imprime_lista(lista);

  shellSort(&lista);

  imprime_lista(lista);


  mergeSort(&lista);

  imprime_lista(lista); 

  return EXIT_SUCCESS;

}