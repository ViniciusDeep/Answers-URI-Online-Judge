#include <iostream>

using namespace std;

int main() {

int q;

cin >> q;

cout << q << endl;
cout << N / 100 << " nota(s) de R$ 100,00" << endl;
q = q % 100;

cout << q / 50 << " nota(s) de R$ 50,00" << endl;
q = q % 50;

cout << q / 20 << " nota(s) de R$ 20,00" << endl;
q = q % 20;

cout << q / 10 << " nota(s) de R$ 10,00" << endl;
q = q % 10;

cout << q / 5 << " nota(s) de R$ 5,00" << endl;
q = q % 5;

cout << q / 2 << " nota(s) de R$ 2,00" << endl;
q = q % 2;

cout << q / 1 << " nota(s) de R$ 1,00" << endl;

return 0;
}

//Vinicius Mangueira Correia
