#include <iostream>
using namespace std;

int main() {
    int lado = 4; // Cambia este número para modificar el tamaño

    for (int i = 0; i < lado; i++) {
        for (int j = 0; j < lado; j++) {
            cout << "x "; // Imprime el carácter en todas las posiciones
        }
        cout << "\n"; // Salto de línea al terminar cada fila
    }
    return 0;
}
