


typedef struct _item{
  char nome[10];
}Item;

typedef struct _mochila{
  Item *v[10];
  int qt;
}Mochila;

Mochila *criar_mochila();

Item *criar_item(char *name);

int adicionar_item(Mochila *mochila,Item *item);

char imprimir_item(Mochila *mochila);

void destruir_item(Mochila *mochila);

void destruir_mochila(Mochila *mochila);

