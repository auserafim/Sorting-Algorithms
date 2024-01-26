#include "lista.h"
#include "ordenacao.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){

  tipo_lista lista;

  lista.contador = 0;

  insere_fim_lista(&lista, 30);

  insere_fim_lista(&lista, 20);

  insere_fim_lista(&lista, 25);

  imprime_lista(lista);


  quickSort(&lista);


  bubbleSort(&lista);

  return EXIT_SUCCESS;

}