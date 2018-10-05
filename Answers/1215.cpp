#include <iostream>
#include <sstream>
#include <cstdio>
#include <cctype>

using namespace std;

bool existe, enter = false;

struct nodo {
    nodo *esquerda;
    string informacao;
    nodo *direita;
    nodo (string info):
        informacao (info),
        esquerda (0),
        direita (0) {}
};

struct nodo *insere ( nodo *tree, string informacao ){
    if (tree == NULL) {
        tree = new nodo (informacao);
    } else {
        int i = 0;
        while (i > -1) {
            if (informacao[i] < tree->informacao[i]) {
                tree->esquerda = insere(tree->esquerda, informacao);
                break;
            }
            else if (informacao[i] > tree->informacao[i]) {
                tree->direita = insere(tree->direita, informacao);
                break;
            }
            else i++;
        }
    }
    return tree;
};

struct nodo *nodobusca (nodo *tree, string informacao) {
    if (tree != NULL) {
        if (informacao == tree->informacao) {
            existe = true;
            return tree;
        }
        else {
            int i = 0;
            while (i > -1) {
                if (informacao[i] < tree->informacao[i]) {
                    tree->esquerda = nodobusca(tree->esquerda, informacao);
                    break;
                }
                else if (informacao[i] > tree->informacao[i]){
                    tree->direita = nodobusca(tree->direita, informacao);
                    break;
                }
                else i++;
            }
        }
    }
    return tree;
};

bool busca (nodo *tree, string informacao){
    if (tree != NULL) {
        tree = nodobusca(tree, informacao);
        if (existe || informacao == tree->informacao) return true;
        else return false;
    } else return false;
}

void imprime (nodo *tree){
    if (tree != NULL) {
        imprime(tree->esquerda);
        cout << tree->informacao << endl;
        imprime(tree->direita);
    }
}

int main(){
    nodo *raiz = 0;
    string linha, leitura = "", palavra = "";
    char letra;
    existe = false;

    while (getline(cin, linha)){
        stringstream streamlinha(linha);
        while (streamlinha >> leitura){
            int i = 0;
            while (i <= leitura.length()){
                if (isalpha(leitura[i])){
                    letra = tolower(leitura[i]);
                    palavra += letra;
                }
                else if (palavra.length() > 0 || (palavra.length() == i && palavra.length() > 0)) {
                    if (!busca(raiz, palavra)){
                        raiz = insere(raiz, palavra);
                        palavra = "";
                    } else {
                        palavra = "";
                        existe = false;
                    }
                }
                i++;
            }
        }
    }
    imprime(raiz);
    return 0;
}
