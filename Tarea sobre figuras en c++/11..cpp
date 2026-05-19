#include <iostream>
using namespace std;

int main() {
    int filas = 5;

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < 6; j++) {
            if (i == 0 || i == filas - 1) {
                if (j == 0 || j == 5) cout << "x ";
                else cout << "  ";
            }
            else if (i == 1 || i == filas - 2) {
                if (j == 2 || j == 3) cout << "  ";
                else cout << "x ";
            }
            else {
                cout << "x ";
            }
        }
        cout << "\n";
    }
    return 0;
}
