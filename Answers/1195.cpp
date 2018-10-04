#include <iostream>
#include <cstdlib>

using namespace std;

struct nodo{
    nodo *esquerda;
    int informacao;
    nodo *direita;
    nodo(int info){
        informacao = info;
        esquerda = NULL;
        direita = NULL;
    }
};

struct nodo *insere(nodo *tree, int informacao){
    if (tree == NULL) {
        tree = new nodo(informacao);
    }
    else if (informacao < tree->informacao)
        tree->esquerda = insere(tree->esquerda, informacao);
    else if (informacao > tree->informacao)
        tree->direita = insere(tree->direita, informacao);
    return tree;
};

void prefixa (nodo *tree){
    if (tree != NULL) {
        cout << " " << tree->informacao;
        prefixa(tree->esquerda);
        prefixa(tree->direita);
    }
}

void infixa (nodo *tree){
    if (tree != NULL) {
        infixa(tree->esquerda);
        cout << " " << tree->informacao;
        infixa(tree->direita);
    }
}

void posfixa (nodo *tree){
    if (tree != NULL) {
        posfixa(tree->esquerda);
        posfixa(tree->direita);
        cout << " " << tree->informacao;
    }
}

int main(){
    int casos, nnum, num;
    cin >> casos;
    for(int i=0;i<casos;i++){
        nodo *arvore = 0;
        cin >> nnum;
        while(nnum > 0){
            cin >> num;
            arvore = insere(arvore, num);
            nnum--;
        }
        cout << "Case " << i+1 << ":" << endl;
        cout << "Pre.:"; prefixa(arvore); cout << endl;
        cout << "In..:"; infixa(arvore); cout << endl;
        cout << "Post:"; posfixa(arvore); cout << endl;
        cout << endl;
    }
    return 0;
}
