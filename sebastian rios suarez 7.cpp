#include <iostream>
using namespace std;

int main() {
    int N;
    int cantidadDivisores = 0;

    cout << "Ingrese un numero: ";
    cin >> N;

    cout << "Divisores:" << endl;

    for (int i = 1; i <= N; i++) {

        if (N % i == 0) {
            cout << i << endl;
            cantidadDivisores++;
        }
    }

    if (cantidadDivisores == 2) {
        cout << "El numero es primo";
    } else {
        cout << "El numero no es primo";
    }

    return 0;
}
