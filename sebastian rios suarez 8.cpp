#include <iostream>
using namespace std;

int main() {

    for (int i = 1; i <= 50; i++) {

        if (i % 3 == 0 && i % 5 == 0) {
            cout << "TrikiTraka" << endl;
        }
        else if (i % 3 == 0) {
            cout << "Triki" << endl;
        }
        else if (i % 5 == 0) {
            cout << "Traka" << endl;
        }
        else {
            cout << i << endl;
        }
    }

    return 0;
}
