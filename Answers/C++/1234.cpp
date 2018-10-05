#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdio>
#include <cctype>

using namespace std;

int main(){

    int cont;
    char letra;
    string frase, saida;

    while(getline(cin, frase)){
        cont = 1;
        saida = "";
        for(int i=0;i<frase.size();i++){
            letra = frase[i];
            if (letra == ' '){
                saida[i] = ' ';
            }
            else if (cont%2!=0){
                saida[i] = toupper(letra);
                cont++;
            }
            else if (cont%2==0){
                saida[i] = tolower(letra);
                cont++;
            }
            cout << saida[i];
        }
        cout << endl;
    }

    return 0;
}
