#include <iostream>
using namespace std;

int main() {
    // Punta de la flecha (Pirámide)
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            if (j >= 3 - i && j <= 3 + i) cout << "x ";
            else cout << "  ";
        }
        cout << "\n";
    }
    // Cuerpo de la flecha (Eje inferior)
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 7; j++) {
            if (i < 2 && j == 3) cout << "x ";
            else if (i == 2 && j >= 2 && j <= 4) cout << "x ";
            else cout << "  ";
        }
        cout << "\n";
    }
    return 0;
}

