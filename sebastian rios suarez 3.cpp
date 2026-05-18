#include <iostream>
using namespace std;

int main() {
    int N;
    long long factorial = 1;

    cout << "Ingrese un numero: ";
    cin >> N;

    for (int i = 1; i <= N; i++) {
        factorial = factorial * i;
    }

    cout << "El factorial es: " << factorial;

    return 0;
}
