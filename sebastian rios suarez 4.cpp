#include <iostream>
using namespace std;

int main() {
    int ancho, alto;

    cout << "Ingrese el ancho: ";
    cin >> ancho;

    cout << "Ingrese el alto: ";
    cin >> alto;

    for (int i = 0; i < alto; i++) {

        for (int j = 0; j < ancho; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
