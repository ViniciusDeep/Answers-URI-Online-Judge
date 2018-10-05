#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void troca_vetor(int u[]){
    int invert[20], num = 0;

    for(int i=19;i>=0;i--){
        invert[num] = u[i];
        num++;
    }

    num = 0;
    for(int i=0;i<20;i++){
        u[i] = invert[num];
        num++;
    }
}

int main(){

    int N[20];

    for(int i=0;i<20;i++){
        cin >> N[i];
    }

    troca_vetor(N);

    for(int i=0;i<20;i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }
    return 0;
}