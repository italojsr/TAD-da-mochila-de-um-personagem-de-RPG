#include <stdio.h>
#include <stdlib.h>
#include "mochila.h"

Mochila *criar_mochila(){

  Mochila *mochila;

  mochila = malloc(sizeof(Mochila));

  mochila->qt = 0;

  return mochila;

};

Item *criar_item(char *name){

  Item *item;

  item = malloc(sizeof(Item));

  strcpy(item->nome,name);

  return item;
  
}


int adicionar_item(Mochila *mochila,Item *item){


  if (mochila->qt < 10){
    mochila->v[mochila->qt] = item;
  
    mochila->qt++;
    return mochila->qt;
  }
  else{
    return -1;
  }
}

char imprimir_item(Mochila *mochila){
  int i;
  for(i=0;i < mochila->qt;i++){
    printf("%s\n",mochila->v[i]->nome);
  }
}


void destruir_item(Mochila *mochila){
  free(mochila->v[(mochila->qt)-1]);
  mochila->qt--;
}

void destruir_mochila(Mochila *mochila){
  free(mochila);
}

