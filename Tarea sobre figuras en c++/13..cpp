#include <iostream>
using namespace std;

int main() {
    int n = 5;
    for (int i = 0; i < n; i++) {
        // Bloque izquierdo
        for (int j = 0; j < 3; j++) {
            if (i <= 2 && j >= 2 - i) cout << "x ";
            else if (i > 2 && j >= i - 2) cout << "x ";
            else cout << "  ";
        }
        cout << "\t"; // Separación central
        // Bloque derecho
        for (int j = 0; j < 3; j++) {
            if (i <= 2 && j <= i) cout << "x ";
            else if (i > 2 && j <= 4 - i) cout << "x ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}
