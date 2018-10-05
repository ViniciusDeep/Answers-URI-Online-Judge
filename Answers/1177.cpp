#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void preenche_vetor(int v, int u[]){
    int w = 0;
    for(int i=0;i<1000;i++){
        if(w == v){
            w = 0;
        }
        u[i] = w;
        w++;
    }
}

int main(){

    int T, N[1000];

    cin >> T;

    preenche_vetor(T,N);

    for(int i=0;i<1000;i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
