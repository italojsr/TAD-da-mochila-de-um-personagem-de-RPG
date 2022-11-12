  Item *item1;


  mochila1 = 1;


  
  
  k=0;

  while(k==0){
    printf("*************MENU***************\n");
    printf("Criar mochila(1)\nInserir item(2)\nConsultar itens na mochila(3)\nRetirar item(4)\nRasgar mochila(5)\nSair(6)\n");
    scanf("%d",&x);

    if(x==1){
      mochila1 = criar_mochila();
    }
    if(x==2){
      if(mochila1 == 1){
        printf("Primeiro crie uma mochila\n");
      }
      else{
        printf("Qual item deseja adicionar?\n");
        scanf("%s",nome_item);
        item1 = criar_item(nome_item);
        printf("Existem %d itens na mochila\n",adicionar_item(mochila1,item1));
      }

    }
    if(x==3){
      if(mochila1 == 1){
        printf("Primeiro crie uma mochila\n");
      }
      else if(mochila1->qt == 0 ){
        printf("Não existem itens ainda\n");
      }

      else{
      imprimir_item(mochila1);
      }
    }
    if(x==4){
      if(mochila1 ==1){
        printf("Primeiro crie uma mochila\n");
      }
      
      else if(mochila1->qt == 0 ){
        printf("Não existem itens ainda\n");
      }
      else{
        destruir_item(mochila1);
      }
    }
    if(x==5){
      if(mochila1 ==1 ){
        printf("Primeiro crie uma mochila\n");
      }
      else{
      destruir_mochila(mochila1);
      }
    }
    if(x==6){
      k = 1;
    }
    
  }
  
  return 0;
}