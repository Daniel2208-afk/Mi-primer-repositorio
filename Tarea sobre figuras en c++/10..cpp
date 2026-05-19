#include <iostream>
using namespace std;

int main() {
    int filas = 6;
    int columnas = 5;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < columnas; j++) {
            if (i == 0 || i == filas - 1) {
                cout << "x ";
            }
            else if (i == 1 || i == filas - 2) {
                if (j >= 1 && j <= 3) cout << "x ";
                else cout << "  ";
            }
            else {
                if (j == 2) cout << "x ";
                else cout << "  ";
            }
        }
        cout << "\n"; 
    }
    return 0;
}
