#include <iostream>
using namespace std;

int main() {
    int A[5] = {10, 20, 30, 40, 50};
    int B[5] = {15, 25, 35, 45, 55};
    int C[10]; 

    for (int i = 0; i < 10; i++) {
        if (i < 5) {
            C[i] = A[i];
        } else {
            C[i] = B[i - 5];
        }
    }
    cout << "Arreglo C: ";
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    return 0;
}

