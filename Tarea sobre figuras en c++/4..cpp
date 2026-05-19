#include <iostream>
using namespace std;

int main() {
    int filas = 4; 

    for (int i = 0; i < filas; i++) {
        for (int j = 0; j < filas - i; j++) {
            cout << "x "; 
        }
        cout << "\n"; 
    }
    return 0;
}
