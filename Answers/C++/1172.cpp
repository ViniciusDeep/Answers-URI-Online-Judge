#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;


void subtvetor(int j[]){
    for(int i=0;i<10;i++){
        if(j[i] <= 0) j[i] = 1;
    }
}

int main(){

    int X[10];

    for(int i=0;i<10;i++){
        cin >> X[i];
    }

    subtvetor(X);

    for(int i=0;i<10;i++){
        cout << "X[" << i << "] = " << X[i] << endl;
    }
    return 0;
}
