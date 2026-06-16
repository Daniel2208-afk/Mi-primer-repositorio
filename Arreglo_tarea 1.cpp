#include <iostream>
using namespace std;

int main() {
    int A[5] = {10, 20, 30, 40, 50};
    int B[5] = {15, 25, 35, 45, 55};
    int C[10]; 

    int a = 0;
    int b = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            C[i] = A[a];
            a++;
        } else {
            C[i] = B[b];
            b++;
        }
    }
    cout << "Arreglo C: ";
    for (int i = 0; i < 10; i++) {
        cout << C[i] << " ";
    }
    return 0;
}
