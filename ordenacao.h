#ifndef __ORDENACAO_H__
#define __ORDENACAO_H__

#include<stdio.h>
#include<stdlib.h>

//Inclui bib que manipula lista com alocacao estatica
#include "lista.h"

//Prototipo dos metodos de ordenacao
void bubbleSort(tipo_lista * );
void shellSorte(tipo_lista*);
void insertionSort(tipo_lista*);
void insertionSort_ver2(tipo_lista*); 
void mergeSort(tipo_lista*);
void quickSort(tipo_lista*);

#endif //FIM ORDENACAO_H


