#include <iostream>
using namespace std;

int main() {
    int tamano = 5; 

    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            // i == j detecta la diagonal de izquierda a derecha
            // i + j == tamano - 1 detecta la diagonal de derecha a izquierda
            if (i == j || i + j == tamano - 1) {
                cout << "x ";
            } else {
                cout << "  "; // Espacios vacíos para el fondo
            }
        }
        cout << "\n"; // Salto de línea
    }
    return 0;
}
