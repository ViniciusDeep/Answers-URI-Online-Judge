#include <iostream>

using namespace std;

int main() {

    int X, Y;
    cin >> X >> Y;

    for(int i = 1; i <= Y; i++){
        cout << i;
        if (i%X == 0 || i==Y)
            cout << endl;
        else
            cout << " ";
    }


    return 0;
}
