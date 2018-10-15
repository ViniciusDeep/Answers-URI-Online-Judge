#include <bits/stdc++.h>

#define MAXN 400

using namespace std;

int testes, pedidos, mochila, pizzas[MAXN], tempo[MAXN], tab[MAXN][MAXN];

int pizza_man_bro(int pedido, int mochila){
  
  if(tab[pedido][mochila] >= 0) return tab[pedido][mochila];

  if(pedido >= pedidos || !mochila) return tab[pedido][mochila] = 0;

  int nao_coloca = pizza_man_bro(pedido+1, mochila);

  if(pizzas[pedido] <= mochila){
    int coloca = tempo[pedido] + pizza_man_bro(pedido+1, mochila - pizzas[pedido]);
    return tab[pedido][mochila] = max(coloca, nao_coloca);
  }

  return tab[pedido][mochila] = nao_coloca;
}


int main() {
  
  cin>>pedidos;
  while(pedidos != 0){
    cin>>mochila;
    memset(tab, -1, sizeof(tab));

    for(int k = 0; k < pedidos; k++){
      cin>>tempo[k];
      cin>>pizzas[k];
    }

    int tempo = pizza_man_bro(0, mochila);
    cout<<tempo<<" min."<<endl;
    cin>>pedidos;
  }
}