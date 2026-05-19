#include <iostream>
using namespace std;

int main() {
    int altura = 4; // Cambia este número para modificar el tamaño

    for (int i = 0; i < altura; i++) {
        for (int j = 0; j <= i; j++) {
            cout << "x "; // El límite 'j <= i' genera la forma triangular
        }
        cout << "\n"; // Salto de línea al terminar cada fila
    }
    return 0;
}
