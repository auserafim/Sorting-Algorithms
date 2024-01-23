#include <stdio.h>
#include <stdlib.h>

#include "ordenacao.h"

void bubbleSort(tipo_lista *lst) {
    int flag_troca, i, aux;
    do {
        flag_troca = 0;
        for(i=0; i< lst->contador-1; i++) {
         if(lst->lista[i] > lst->lista[i+1]) {
            aux - lst->lista[i];
            lst->lista[i] = lst->lista[i+1];
            lst->lista[i+1] = aux;
            flag_troca++;
         }
        }
    } while(flag_troca != 0); //SE HOUVE ALGUMA TROCA, volta para o começo do laço 
}


void shellSort(tipo_lista *lst) {
    tipo_lista lista;
    int salto, i, flag_troca, aux;
    salto (int) lst->contador/2;

    while(salto > 1) {
        for(i=0; (i+salto) < lst->contador;i++) {
            if(lst->lista[i] > lst->lista[i+salto]) {
                aux = lst->lista[i];
                lst->lista[i] = lst->lista[i+salto];
                lst->lista[i+salto] = aux;
            }
        }
        salto = (int) salto/2;
    }
   
    // Parte equivalente do bubble sort 
    
    
    
         do {
        flag_troca = 0;
        for(i=0; i< lst->contador-1; i++) {
         if(lst->lista[i] > lst->lista[i+1]) {
            aux - lst->lista[i];
            lst->lista[i] = lst->lista[i+1];
            lst->lista[i+1] = aux;
            flag_troca++;
         }
        }void insertionSort(tipo_lista *lst);

    } while(flag_troca != 0); //SE HOUVE ALGUMA TROCA, volta para o começo do laço 
    

    //bubbleSort(&lista);
 
}

void insertionSort(tipo_lista *lst) {
    int i, pos;
    tipo_lista lst_ordenada;

    lst_ordenada.contador = 0;

    for(i=0; i < lst->contador; i++){
        pos = lst_ordenada.contador;
        if(pos==0){
            insere_fim_lista(&lst_ordenada, lst->lista[i]);
        } else {
            while((pos > 0) && (lst->lista[i]) < lst_ordenada.lista[pos-1]) {
                pos--;
            }
            insere_pos_lista(&lst_ordenada, lst->lista[i], pos);
        }
    }

}


void insertionSort_ver2(tipo_lista *lst) {
    int corte, i, aux; 

    corte = 1;

    while(corte < lst->contador) {

        i = corte;
        
        while((i>0) && (lst->lista[i] < lst->lista[i-1])) {
            aux = lst->lista[i];
            lst->lista[i] = lst->lista[i-1];
            lst->lista[i-1] = aux; 
            i--;
        }

        corte++;
    }

}