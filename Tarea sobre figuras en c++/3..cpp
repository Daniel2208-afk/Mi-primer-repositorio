#include <iostream>
using namespace std;

int main() {
    int tamano = 4;

    for (int i = 0; i < tamano; i++) {
        for (int j = 0; j < tamano; j++) {
            if (i == 0 || i == tamano - 1 || i + j == tamano - 1) {
                cout << "x ";
            } else {
                cout << "  "; 
            }
        }
        cout << "\n"; 
    }
    return 0;
}
