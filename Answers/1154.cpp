#include <iostream>
#include <iomanip>>

using namespace std;

int main() {

    int idade;
    double media = 0.0, cont = 0.0;

    cin >> idade;
    while(idade>0){
        media += idade;
        cont++;
        cin >> idade;
    }
    cont *= 1.0;
    cout << fixed << setprecision(2);
    cout << media/cont << endl;

    return 0;
}