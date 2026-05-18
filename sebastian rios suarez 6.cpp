using namespace std;

int main() {
    int num;
    int sumaPares = 0;
    int cantidadImpares = 0;

    for (int i = 1; i <= 10; i++) {

        cout << "Ingrese un numero: ";
        cin >> num;

        if (num % 2 == 0) {
            sumaPares = sumaPares + num;
        } else {
            cantidadImpares++;
        }
    }

    cout << "Suma de numeros pares: " << sumaPares << endl;
    cout << "Cantidad de numeros impares: " << cantidadImpares;

    return 0;
}
