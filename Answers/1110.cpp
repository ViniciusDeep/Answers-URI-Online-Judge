#include <iostream>
#include <queue>

using namespace std;

int main(){
    int casas;
    while(cin >> casas && casas){
        queue <int> fila;
        for(int i=1;i<=casas;i++){
            fila.push(i);
        }
        cout << "Discarded cards:";
        while(fila.size() > 1){
            cout << " " << fila.front();
            fila.pop();
            fila.push(fila.front());
            fila.pop();
            if (fila.size() > 1) cout << ",";
        }
        cout << endl << "Remaining card: " << fila.front() << endl;
    }

    return 0;
}
