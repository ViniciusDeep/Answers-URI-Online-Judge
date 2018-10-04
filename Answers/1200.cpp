#include <iostream>
#include <cstdlib>

#define TIPO char
using namespace std;

int cont = 0;
struct nodo {
    nodo *esquerda;
    TIPO informacao;
    nodo *direita;
    nodo (TIPO info ):
        informacao(info),
        esquerda(0),
        direita(0) {}
};
nodo *P;
int espaco;
struct nodo *insere (nodo *tree, TIPO informacao) {
    if(tree == NULL)
        tree = new nodo (informacao);
    else if (informacao < tree ->informacao)
        tree->esquerda = insere(tree->esquerda, informacao);
    else if (informacao > tree->informacao)
        tree->direita = insere(tree->direita, informacao);
    return tree;
};
struct nodo *busca(nodo *raiz, char valor) {
    if(raiz == NULL) {
        cout << valor << " nao existe" << endl;
        return NULL;
    } else {
        if(raiz->informacao > valor) {
            busca(raiz->esquerda, valor);
        } else if(raiz->informacao < valor) {
            busca(raiz->direita, valor);
        } else cout << valor << " existe" << endl;
    }
};
void infixa(nodo *tree) {
    if(tree != NULL) {
        infixa(tree->esquerda);
        if(espaco != 1)
            cout << " " << tree->informacao;
        else {
            cout << tree->informacao;
            espaco = 0;
        }
        infixa(tree->direita);
    }
}

void prefixa(nodo *tree) {
    if(tree != NULL) {
        if(espaco != 1)
            cout << " " << tree->informacao;
        else {
            cout << tree->informacao;
            espaco = 0;
        }
        prefixa(tree->esquerda);
        prefixa(tree->direita);
    }
}

void posfixa(nodo *tree) {
    if(tree != NULL) {
        posfixa(tree->esquerda);
        posfixa(tree->direita);
        if(espaco != 1)
            cout << " " << tree->informacao;
        else {
            cout << tree->informacao;
            espaco = 0;
        }
    }
}
int main() {
    nodo *raiz = 0;
    TIPO valor;
    string op;
    while(cin >> op) {
        if(op == "I") {
            cin >> valor;
            raiz = insere(raiz, valor);
        }
        if (op == "P") {
            cin >> valor;
            busca(raiz, valor);
        }
        if(op == "INFIXA") {
            espaco = 1;
            infixa(raiz);
            cout << endl;
        }
        if(op == "PREFIXA") {
            espaco = 1;
            prefixa(raiz);
            cout << endl;
        }
        if(op == "POSFIXA") {
            espaco = 1;
            posfixa(raiz);
            cout << endl;
        }
    }
}
